/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:26:34 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/01 09:45:03 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	return (len);
}

void	ft_strcpy(char *dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(ft_strlen(src) + 1);
	if ((dst) == 0)
		return (0);
	ft_strcpy(dst, src);
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*mystruct;

	i = 0;
	mystruct = (t_stock_str *) malloc ((8 + 8 + 4 + 5) * (ac + 1));
	if ((mystruct) == 0)
		return (0);
	while (i < ac)
	{
		mystruct[i].size = ft_strlen(av[i]);
		mystruct[i].str = av[i];
		mystruct[i].copy = ft_strdup(av[i]);
		i++;
	}
	mystruct[i].size = 0;
	mystruct[i].str = 0;
	mystruct[i].copy = 0;
	return (mystruct);
}

/*
#include<stdio.h>

int main()
{
	char *test[] = {"OPPENHEIMER","IS", "BETTER", "THAN", "BARBIE", "OK?"};
	int i = 0;
	int size = 3;
	struct s_stock_str *out = ft_strs_to_tab(size, test);
	while(i < size + 1)
	{
		printf("Size: %d\n", out[i].size);
		printf("Str: %s\n", out[i].str);
		printf("Cpy: %s\n", out[i].copy);
		printf("-----------------\n");
		i++;
	}
	return (0);
}
*/