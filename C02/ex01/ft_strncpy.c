/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:07:21 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/20 18:23:02 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	size;

	i = 0;
	size = (int)n;
	while (i < size && src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

/*
int main()
{
	char test[] = "111111111111";
	char test2[] = "BYDD";

	ft_strncpy(test,test2, 10);
	int l;
	l = 0;
	while (l < 10)
	{
		printf("%c", test[l]);
		l++;
	}

	strncpy(test,test2,10);

	l = 0;
	while (l < 10)
	{
		printf("%c", test[l]);
		l++;
	}
	return 0;

}
*/