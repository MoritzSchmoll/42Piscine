/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:58:34 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/02 10:28:10 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	len;

	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	lengthdest;
	unsigned int	lengthsrc;

	lengthdest = ft_strlen(dest);
	lengthsrc = ft_strlen(src);
	if (lengthdest >= size)
		return (size + lengthsrc);
	i = lengthdest;
	j = 0;
	while (src[j] != 0 && (size - i - 1) > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (lengthdest + lengthsrc);
}

// #include<stdio.h>
// #include<string.h>

// int main()
// {
//  char src[] = "trash.";
//  char dest[100] = "Barbie is ";
//  unsigned int n = 20;
//  printf("Laenge: %d\n", ft_strlcat(dest, src, n));
//  printf("Soweit zusammengesetzt: %s\n", dest);
// }
