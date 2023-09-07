/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:48:51 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/27 11:57:15 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	out;

	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	out = 1;
	while (nb > 1)
	{
		out = nb * out;
		nb--;
	}
	return (out);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}
*/