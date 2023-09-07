/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:03:22 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/06 11:49:12 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **src)
{
	int	len;

	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	stoploop;

	stoploop = 0;
	i = 0;
	while (stoploop == 0)
	{
		if (s1[i] != s2[i])
		{
			if (s2[i] < s1[i])
			{
				return (s1[i] - s2[i]);
			}
			return ((int)((s2[i] - s1[i]) * -1));
		}
		if (s1[i] == 0)
		{
			stoploop = 1;
		}
		i++;
	}
	return (0);
}

void	swap(char **tab, int i)
{
	char	*k;

	k = tab[i + 1];
	tab[i + 1] = tab[i];
	tab[i] = k;
}

void	sort(char **tab)
{
	int	i;
	int	swapped;
	int	size;

	size = ft_strlen(tab);
	swapped = 1;
	while (swapped == 1)
	{
		i = 0;
		swapped = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				swap(tab, i);
				swapped = 1;
			}
			i++;
		}
	}
}

void	ft_sort_string_tab(char **tab)
{
	sort(tab);
}

// #include<stdio.h>
// int main()
// {
// 	int i;

// 	i = 0;

// 	char *arr[] = {"ABC", "CBA", "ABA", "BCA", "BAC", 0};
// 	sort(arr);
// 	while(i < 5)
// 	{
// 		printf("%s, ", arr[i++]);
// 	}

// 	return 0;
// }