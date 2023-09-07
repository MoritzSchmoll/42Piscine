/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:25:11 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/07 14:12:30 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort_inverted(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	cmp;

	cmp = tab[0];
	i = 1;
	while (i < length)
	{
		if ((*f)(tab[i], cmp) > 0)
		{
			return (0);
		}
		if (i < length - 1)
			cmp = tab[i++];
		else
			break ;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	cmp;

	if (length <= 1)
		return (1);
	cmp = tab[0];
	i = 1;
	while (i < length)
	{
		if ((*f)(tab[i], cmp) < 0)
		{
			return (ft_is_sort_inverted(tab, length, (*f)));
		}
		if (i < length - 1)
			cmp = tab[i++];
		else
			break ;
	}
	return (1);
}

// #include<stdio.h>

// int	something(int one, int two)
// {
// 	if(one > two)
// 		return 1;
// 	return -1;
// }

// int main(void)
// {
// 	int tab[] = {4,3,2,1};
// 	printf("Inverted = %d\n", ft_is_sort(tab, 4, &something));
// 	int tab2[] = {1,2,3,4};
// 	printf("Sorted = %d\n", ft_is_sort(tab2, 4, &something));
// 	int tab3[] = {1,2,5,4};
// 	printf("Not Sorted = %d\n", ft_is_sort(tab3, 4, &something));
// 	return 0;
// }