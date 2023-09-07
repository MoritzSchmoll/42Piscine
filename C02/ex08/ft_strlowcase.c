/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:43:19 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/20 13:13:32 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	size;
	int	i;

	size = 0;
	while (str[size] != 0)
	{
		size++;
	}
	i = 0;
	while (i < size)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "TEST:fh4H78";
	int i;
	i = 0;
	while (i < 9)
		{
		printf("%c",ft_strlowcase(str)[i]);
		i++;
		}
	return 0;
}
*/