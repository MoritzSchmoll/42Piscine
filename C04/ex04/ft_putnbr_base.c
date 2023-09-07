/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:14:26 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/02 17:14:59 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	checklength(char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		i++;
	}
	return (i);
}

int	checkinvalid(char *base)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (base[i] != 0)
	{
		if (base[i] == 43 || base[i] == 45)
			return (1);
		j = i;
		k = 0;
		while (base[j] != 0)
		{
			if (base[j] == base[i])
				k++;
			if (k > 1)
				return (1);
			j++;
		}
		i++;
	}
	if (checklength(base) <= 1)
		return (1);
	return (0);
}

void	printer(int baselength, char *base, long nbr_long, int i)
{
	char	getchar;
	int		rest;
	long	q;
	int		j;

	while (i != 0)
	{
		q = nbr_long;
		j = i;
		while (j != 0)
		{
			rest = q % baselength;
			q = q / baselength;
			j--;
		}
		getchar = base[rest];
		write(1, &getchar, 1);
		i--;
	}
}

void	checknegativesign(long *nbr_long, char *base)
{
	if (*nbr_long == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (*nbr_long < 0)
	{
		write(1, "-", 1);
		*nbr_long = *nbr_long * -1;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		baselength;
	int		i;
	long	q;
	int		rest;
	long	nbr_long;

	nbr_long = (long) nbr;
	if (checkinvalid(base) == 1)
		return ;
	checknegativesign(&nbr_long, base);
	baselength = 0;
	while (base[baselength] != 0)
	{
		baselength++;
	}
	q = nbr_long;
	i = 0;
	while (q != 0 && baselength != 0)
	{
		rest = q % baselength;
		q = q / baselength;
		i++;
	}
	printer(baselength, base, nbr_long, i);
}

/*
int	main(void)
{
	ft_putnbr_base(-2147483648, "01");
	return (0);
}
*/