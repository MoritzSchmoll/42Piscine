/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 09:35:41 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/28 11:39:25 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		start;
	int		end;
	long	mid;

	if (nb <= 0)
	{
		return (0);
	}
	start = 0;
	end = nb;
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (0);
}

/*
#include<stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(2253001));
	return 0;
}
*/