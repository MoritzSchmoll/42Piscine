/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 17:16:55 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/26 09:35:02 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 2 || index == 1)
	{
		return (1);
	}
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include<stdio.h>

int main()
{
	printf("%d\n", ft_fibonacci(-1));
	return 0;
}
*/