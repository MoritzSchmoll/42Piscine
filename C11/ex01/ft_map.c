/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:06:18 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/06 17:15:08 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	arr = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		arr[i] = (*f)(tab[i]);
		i++;
	}
	return (arr);
}

// #include<stdio.h>

// int	something(int x)
// {
// 	if(x <= 3)
// 		return 0;
// 	return x;
// }

// int main(void)
// {
// 	int tab[] = {5, 4, 3};
// 	int *arr = ft_map(tab, 3, &something);
// 	int i = 0;
// 	while(i < 3)
// 		printf("%d", arr[i++]);
// 	return 0;
// }