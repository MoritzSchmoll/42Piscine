/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:16:09 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/05 13:29:58 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	return (len);
}

void	ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = (char *)malloc((ft_strlen(src) + 1) * 8);
	if ((dst) == 0)
		return (0);
	ft_strcpy(dst, src);
	return (dst);
}

//#include <stdio.h>

// int main()
// {
// 	char str[] = "HELLO";
// 	printf("%s", ft_strdup(str));
// 	return 0;
// }
