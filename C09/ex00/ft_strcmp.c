/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:12:47 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/21 15:44:45 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	stoploop;

	stoploop = 0;
	i = 0;
	while (stoploop == 0)
	{
		if (s1[i] != s2[i])
		{
			if (s2[i] < s1[i])
			{
				return (s1[i] - s2[i]);
			}
			return ((int)((s2[i] - s1[i]) * -1));
		}
		if (s1[i] == 0)
		{
			stoploop = 1;
		}
		i++;
	}
	return (0);
}

/*
int main()
{
	char s1[] = "TESU";
	char s2[] = "TESZ";
	int temp = 0;
	temp = ft_strcmp(s1, s2);
	printf("%d", temp);
	
	temp = strcmp(s1, s2);
	//printf("%s", s2);
	printf("%d", temp);
	return 0;
}
*/