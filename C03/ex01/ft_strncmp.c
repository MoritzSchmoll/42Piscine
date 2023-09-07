/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:09:07 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/23 09:56:14 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	stoploop;

	i = 0;
	stoploop = 0;
	while (stoploop == 0)
	{
		if (s1[i] != s2[i] && n > 0)
		{
			if (s2[i] < s1[i])
			{
				return (s1[i] - s2[i]);
			}
			return ((int)((s2[i] - s1[i]) * -1));
		}
		if (s1[i] == 0 || n == 0)
		{
			stoploop = 1;
		}
		n--;
		i++;
	}
	return (0);
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
	char s1[10] = "b234t34t";
	char s2[] = "b23423423";
	int temp = 0;
	temp = ft_strncmp(s1, s2, 3);
	printf("%d", temp);
	
	temp = strncmp(s1, s2, 3);
	//printf("%s", s2);
	printf("%d", temp);
	return 0;
}
*/
