/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:09:48 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/19 09:31:49 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *tab, int i)
{
	int	k;

	k = tab[i + 1];
	tab[i + 1] = tab[i];
	tab[i] = k;
}

void	sort(int *tab, int size)
{
	int	i;
	int	swapped;

	swapped = 1;
	while (swapped == 1)
	{
		i = 0;
		swapped = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				swap(tab, i);
				swapped = 1;
			}
			i++;
		}
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	sort(tab, size);
}
