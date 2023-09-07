/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:00:34 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/24 12:28:47 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	calculator(char *str, int i, int signchanger)
{
	int	out;

	out = 0;
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		out = (out * 10) + str[i] - 48;
		i++;
	}
	if (signchanger % 2 != 0)
	{
		out = out * -1;
	}
	return (out);
}

int	ft_atoi(char *str)
{
	int	i;
	int	signchanger;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	signchanger = 0;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
		{
			signchanger++;
		}
		i++;
	}
	return (calculator(str, i, signchanger));
}

/*
int main()
{
	printf("%d", ft_aoi("---+--+123467567 addj 5"));
	return 0;
}
*/