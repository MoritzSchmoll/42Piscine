/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:43:08 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/06 16:52:05 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb);
int		ft_atoi(char *str);

void	plus(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 + nbr2);
}

void	minus(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 - nbr2);
}

void	multiply(int nbr1, int nbr2)
{
	ft_putnbr(nbr1 * nbr2);
}

void	divide(int nbr1, int nbr2)
{
	if (nbr2 == 0)
		write(1, "Stop : division by zero", 23);
	else
		ft_putnbr(nbr1 / nbr2);
}

void	modulo(int nbr1, int nbr2)
{
	if (nbr2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else
		ft_putnbr(nbr1 % nbr2);
}
