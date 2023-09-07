/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:21:52 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/01 11:30:23 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_power(int baselength, int j)
{
	int	power;

	if (j == 0)
		power = 1;
	else
		power = baselength;
	while (j > 1)
	{
		power = power * baselength;
		j--;
	}
	return (power);
}

int	base_to_decimal(char *nbr, int baselength, int nbrlength, char *base)
{
	int	out;
	int	j;
	int	k;
	int	i;
	int	cnt;

	i = 0;
	out = 0;
	k = 0;
	while (i < nbrlength)
	{
		cnt = 0;
		j = nbrlength - 1 - k;
		while (base[cnt] != *nbr)
			cnt++;
		out = (out + (cnt * get_power(baselength, j)));
		k++;
		nbr++;
		i++;
	}
	return (out);
}

int	get_length(char *nbr, char *base, int i, int *baselength)
{
	int	nbrlength;
	int	checknbr;
	int	j;
	int	k;

	nbrlength = i;
	checknbr = 1;
	k = 0;
	while (checknbr == 1)
	{
		j = 0;
		checknbr = 0;
		while (nbr[i + k] != 0 && base[j] != 0)
		{
			if (nbr[i + k] == base[j])
			{
				checknbr = 1;
				nbrlength++;
			}
			j++;
		}
		k++;
	}
	nbrlength = nbrlength - i;
	return (base_to_decimal(&nbr[i], *baselength, nbrlength, base));
}

int	checkinvalid(char *base, int *baselength)
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
		*baselength = *baselength + 1;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	baselength;
	int	i;
	int	signchanger;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	signchanger = 1;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			signchanger = signchanger * -1;
		}
		i++;
	}
	baselength = 0;
	if (checkinvalid(base, &baselength) == 1)
		return (0);
	if (baselength <= 1)
		return (0);
	return (signchanger * get_length(str, base, i, &baselength));
}

/*
#include<stdio.h>

int	main(void)
{
	printf("%d", ft_atoi_base("--0222147483648", "01"));
	return (0);
}
*/