/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:33:52 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/03 16:37:13 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	if (min == max || min > max)
	{
		arr = 0;
		return (0);
	}
	i = 0;
	arr = (int *)malloc(4 * (max - min));
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

// #include <stdio.h>

// int main()
// {
// 	int i = 0;
// 	while(i < 6)
// 	{
// 		printf("%d", ft_range(5, 10));
// 	}
// 	return 0;
// }
