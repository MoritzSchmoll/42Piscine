/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:12:57 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/01 09:46:42 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	nbr_printer(int nbr, int pos)
{
	int	i;
	int	multiplier;

	multiplier = 1;
	i = 0;
	while (i < pos)
	{
		multiplier *= 10;
		i++;
	}
	nbr = nbr / multiplier;
	nbr = nbr % 10;
	nbr = nbr + 48;
	write(1, &nbr, 1);
}

void	ft_putnbr(int nbr)
{
	int	i;
	int	length;
	int	temp;

	temp = nbr;
	i = 0;
	length = 0;
	if (temp == 0)
		write(1, "0", 1);
	while (temp != 0)
	{
		temp = temp / 10;
		length++;
	}
	while (i < length)
	{
		nbr_printer(nbr, length - i - 1);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (par[size].str != 0)
	{
		size++;
	}
	while (i < size)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

/*
#include<stdio.h>

int main()
{
	//ft_show_tab();
	//ft_putnbr(19993);
	return 0;
}
*/