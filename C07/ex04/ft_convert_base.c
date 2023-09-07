/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:40:18 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/06 09:43:46 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include"ft_convert_base2.c"

int	ft_atoi_base(char *str, char *base);
int	checkinvalid(char *base, int *baselength);

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

void	printer(char *base, long *q, int *nbrlength, char **arr)
{
	char	getchar;
	long	rest;
	long	baselength;
	int		x;

	x = 0;
	rest = 0;
	baselength = checklength(base);
	if (*q != 0 && baselength != 0)
	{
		rest = *q % baselength;
		*q = *q / baselength;
		x = *nbrlength;
		(*nbrlength)++;
		if (*q != 0)
			printer(base, q, nbrlength, arr);
		else
		{
			(*arr) = (char *)malloc(8 * ((*nbrlength) + 1));
			(*arr)[*nbrlength] = 0;
		}
	}
	getchar = base[rest];
	(*arr)[(*nbrlength) - x - 1] = getchar;
}

void	addminussign(char **arr, int nbrlength)
{
	int	i;
	int	temp;
	int	temp2;

	temp = arr[0][0];
	i = 1;
	arr[0][0] = '-';
	while (i < nbrlength)
	{
		temp2 = arr[0][i];
		arr[0][i] = temp;
		temp = temp2;
		i++;
	}
}

void	ft_putnbr_base(int nbr, char *base, char **arr)
{
	long	q;
	int		nbrlength;
	long	nbr_long;
	int		isnegative;

	isnegative = 0;
	nbr_long = (long) nbr;
	nbrlength = 0;
	if (nbr_long < 0)
	{
		nbr_long = nbr_long * -1;
		nbrlength = 1;
		isnegative = 1;
	}
	q = nbr_long;
	if (nbr == 0)
	{
		arr[0] = (char *)malloc(16);
		arr[0][0] = base[0];
		arr[0][1] = '\0';
		return ;
	}
	printer(base, &q, &nbrlength, arr);
	if (isnegative)
		addminussign(arr, nbrlength);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	**arr;
	int		invalidbase;
	int		i;

	arr = (char **)malloc(8 * 2);
	arr[1] = 0;
	invalidbase = 0;
	if (checkinvalid(base_from, &invalidbase))
		return (0);
	i = 0;
	while (base_from[i] != 0)
	{
		if ((base_from[i] >= 9 && base_from[i] <= 13) || (base_from[i] == 32))
			return (0);
		i++;
	}
	if (checkinvalid(base_to, &invalidbase)
		|| checklength(base_from) < 2
		|| checklength(base_to) < 2)
		return (0);
	ft_putnbr_base(ft_atoi_base(nbr, base_from), base_to, arr);
	arr[0][checklength(arr[0])] = 0;
	return (arr[0]);
}

// #include<stdio.h>

// int main(void)
// {
// 	printf("%s", ft_convert_base("-20000100222211021", "gk", "gk"));
// 	return (0);
// }