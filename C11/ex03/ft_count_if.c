/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:23:48 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/06 17:14:48 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < length)
	{
		if ((*f)(tab[i++]) != 0)
		{
			cnt++;
		}
	}
	return (cnt);
}

// #include<stdio.h>

// int	something(char *x)
// {
// 	if(x[0] == 'T')
// 		return 0;
// 	return 1;
// }

// int main(void)
// {
// 	char *tab[] = {"TEST", "HORLD", "HELLO", 0};
// 	int x = ft_count_if(tab, 3, &something);
// 	printf("%d", x);
// 	return 0;
// }