/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:45:14 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/05 13:31:07 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen2(char *src)
{
	int	len;

	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen2(dest);
	while (src[i] != 0)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen2(strs[i++]);
		if (i < size)
			len = len + ft_strlen2(sep);
	}
	str = (char *)malloc(8 * (len + 1));
	if (!str)
		return (0);
	str[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i + 1 < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

// #include<stdio.h>

// int main(void)
// {
// 	char *test[] = {"Hello", "world", "!"};
// 	char *sep = ", ";
// 	ft_strjoin(3, test, sep);
// 	char *test2[] = {"Test", "world", "!"};
// 	printf("%s",	ft_strjoin(3, test2, sep));
// 	printf("%s",	ft_strjoin(3, test2, sep));
// 	return (0);
// }
