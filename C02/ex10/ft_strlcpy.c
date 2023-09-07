/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 13:36:25 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/20 17:51:01 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	n;

	n = (int)size;
	j = 0;
	while (src[j] != 0)
	{
		j++;
	}
	i = 0;
	while (i < (n - 1))
	{
		if (src[i] == 0)
		{
			break ;
		}
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		dest[i] = 0;
	}
	return (j);
}

/*
int main()
{

	char src[] = "TEST@£@";
	char dst[] = "TES£*$&jkdhhfjka";

	
	printf("%d\n", ft_strlcpy(dst, src, 14));
	
	int i = 0;
	while (i < 14)
	{
		printf("%c", dst[i]);
		i++;
	}
	printf("\n");
	printf("%d", (int)strlcpy(dst, src, 14));
	printf("\n");
	i = 0;
	while (i < 14)
	{
		printf("%c", dst[i]);
		i++;
	}
	return 0;
}
*/