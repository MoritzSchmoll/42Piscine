/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:49:30 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/27 11:30:55 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	argc = 0;
	i = 0;
	j = 1;
	while (argv[j] != 0)
	{
		j++;
	}
	j--;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != 0)
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
