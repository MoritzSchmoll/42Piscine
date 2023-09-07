/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:46:21 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/06 17:14:14 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i++]);
	}
}

// #include<stdio.h>

// void	something(int x)
// {
// 	printf("%d", x);
// }

// int main(void)
// {
// 	int tab[] = {5, 4, 3};
// 	ft_foreach(tab, 3, &something);
// 	return 0;
// }