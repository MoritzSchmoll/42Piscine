/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 16:51:38 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/20 18:06:03 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	l;
	int	i;

	l = 0;
	while (src[l] != 0)
	{
		l++;
	}
	i = 0;
	while (i <= l)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*
int main()
{
	char test[] = "HELLO";
	char test2[] = "BYEEE";

	ft_strcpy(test,test2);
	int l;
	l = 0;
	while (test[l] != 0)
	{
		printf("%d", test[l]);
		l++;
	}
	return 0;

}
*/