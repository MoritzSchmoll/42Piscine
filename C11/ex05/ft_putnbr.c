/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:43:44 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/24 12:28:35 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(int i, int nb, int mod)
{
	int	j;
	int	printer;

	j = i;
	while (i > 1)
	{
		printer = (nb / mod);
		printer = printer % 10;
		printer += 48;
		write(1, &printer, 1);
		mod = mod / 10;
		i--;
	}
	printer = (nb % 10) + 48;
	write(1, &printer, 1);
}

void	getlength(int *temp, int *i, int *mod)
{
	while (*temp != 0)
	{
		*temp = *temp / 10;
		if (*i > 0)
			*mod = *mod * 10;
		*i += 1;
	}
}

void	ft_putnbr(int nb)
{
	int	i;
	int	temp;
	int	mod;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	i = 0;
	mod = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	temp = nb;
	getlength(&temp, &i, &mod);
	printer(i, nb, mod);
}

/*
int	main(void)
{
	ft_putnbr(-2147483647);
	return (0);
}
*/