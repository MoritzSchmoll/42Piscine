/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:21:15 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/06 17:14:33 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char **src)
{
	int	len;

	len = 0;
	while (src[len] != 0)
	{
		len++;
	}
	return (len);
}

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(tab);
	while (i < len)
	{
		if ((*f)(tab[i++]) != 0)
		{
			return (1);
		}
	}
	return (0);
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
// 	char *tab[] = {"TEST", "TORLD", "TELLO", 0};
// 	int x = ft_any(tab, &something);
// 	printf("%d", x);
// 	return 0;
// }
