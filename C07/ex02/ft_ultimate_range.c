/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:33:52 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/03 16:58:36 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min == max || min > max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	arr = (int *)malloc(4 * (max - min));
	if (!arr)
	{
		return (-1);
	}
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	range[0] = arr;
	return (max - min);
}

// #include <stdio.h>

// int main()
// {
// 	int *range;
// 	int i = 0;
// 	ft_ultimate_range(&range, 5, 10);
// 	while(i < 5)
// 	{
// 		printf("%d", range[i]);
// 		i++;
// 	}
// 	return 0;
// }
