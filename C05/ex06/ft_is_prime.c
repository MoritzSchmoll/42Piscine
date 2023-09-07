/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:48:51 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/26 10:14:16 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 2)
	{
		return (0);
	}
	while (1)
	{
		if (i == 1)
		{
			return (1);
		}
		if (nb % i == 0 && i != 1)
		{
			return (0);
		}
		i--;
	}
}
/*
#include<stdio.h>

int main()
{
	printf("%d\n", ft_is_prime(89));
	return 0;
}
*/