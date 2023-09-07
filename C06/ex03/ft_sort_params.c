/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 09:51:51 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/27 11:18:46 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	compare(char **argv, int k)
{
	int		i;
	char	*swap;

	i = 0;
	while (1)
	{
		if (argv[k][i] > argv[k + 1][i])
		{
			swap = argv[k];
			argv[k] = argv[k + 1];
			argv[k + 1] = swap;
			return (1);
		}
		if (argv[k][i] < argv[k + 1][i])
		{
			return (0);
		}
		if (argv[k][i] == 0)
		{
			return (0);
		}
		i++;
	}
}

void	printer(char **argv)
{
	int	j;
	int	i;

	j = 1;
	while (argv[j] != 0)
	{
		i = 0;
		while (argv[j][i] != 0)
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	k;
	int	swapped;

	swapped = 1;
	while (swapped == 1)
	{
		swapped = 0;
		k = 1;
		while (k < argc - 1)
		{
			if (compare(argv, k) == 1)
			{
				swapped = 1;
			}
			k++;
		}
	}
	printer(argv);
	return (0);
}
