/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:14:37 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/03 15:13:08 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		nb = 2;
	}
	i = 2;
	while (i < 46341 && i * i <= nb)
	{
		if (nb % i == 0)
		{
			i = 1;
			nb++;
		}
		i++;
	}
	return (nb);
}

// #include<stdio.h>

// int main()
// {
// 	printf("%d\n", ft_find_next_prime(395421));
// 	return 0;
// }