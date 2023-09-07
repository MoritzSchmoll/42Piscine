/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:02:24 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/27 11:58:12 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	out;

	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	out = nb;
	while (power > 1)
	{
		out *= nb;
		power--;
	}
	return (out);
}

/*
#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_power(5,3));
	return 0;
}
*/