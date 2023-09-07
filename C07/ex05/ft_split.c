/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:30:12 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/03 17:10:16 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	is_char_in_seperator(char c, char *charset)
{
	int	j;
	int	checkword;

	checkword = 0;
	j = 0;
	while (charset[j] != 0)
	{
		if (c == charset[j])
		{
			checkword = 1;
			break ;
		}
		checkword = 0;
		j++;
	}
	return (checkword);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	cnt;
	int	checkword;
	int	pastseperator;
	int	j;

	i = 0;
	cnt = 0;
	checkword = 1;
	while (str[i] != 0)
	{
		pastseperator = checkword;
		j = 0;
		checkword = is_char_in_seperator(str[i], charset);
		if (pastseperator == 1 && checkword == 0)
			cnt++;
		i++;
	}
	return (cnt);
}

int	get_word_index(char *str, char *charset, int word)
{
	int	i;
	int	cnt;
	int	checkword;
	int	pastseperator;
	int	j;

	i = 0;
	cnt = 0;
	checkword = 1;
	while (str[i] != 0)
	{
		pastseperator = checkword;
		j = 0;
		checkword = is_char_in_seperator(str[i], charset);
		if (pastseperator == 1 && checkword == 0)
		{
			if (cnt == word)
				return (i);
			cnt++;
		}
		i++;
	}
	return (cnt);
}

char	*get_word(char *str, char *charset, int wordindex)
{
	char	*word;
	int		i;
	int		j;
	int		wordlength;
	int		temp;

	wordlength = 0;
	j = 0;
	temp = get_word_index(str, charset, wordindex);
	i = temp;
	while (str[i] != 0 && is_char_in_seperator(str[i], charset) != 1)
	{
		wordlength++;
		i++;
	}
	word = (char *)malloc((wordlength + 1) * sizeof(char));
	i = temp;
	while ((temp + (i - temp)) < temp + wordlength)
	{
		word[j] = str[i];
		j++;
		i++;
	}
	word[j] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		wordcount;
	int		i;

	wordcount = count_words(str, charset);
	arr = (char **) malloc ((wordcount * (8 + 1)));
	i = 0;
	while (i < wordcount)
	{
		arr[i] = get_word(str, charset, i);
		i++;
	}
	arr[i] = 0;
	return (arr);
}

// #include<stdio.h>
// int main()
// {
// 	char str[] = "HELLO-IM-MOR1TZ";
// 	printf("%s", ft_split(str, "-")[0]);
// 	return 0;
// }
