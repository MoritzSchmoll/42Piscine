/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:16:13 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/22 10:30:59 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (src[j] != 0 && nb > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		nb--;
	}
	dest[i] = 0;
	return (dest);
}

/*
int main()
{
	char s1[20] = "TESUSDFSDFSsdf";
	char s2[20] = "co";
	char s12[20] = "TESUSDFSDFSsdf";
	char *temp = 0;
	temp = ft_strncat(s1, s2, 3);
	printf("%s", s1);
	printf("\n");
	temp = strncat(s12, s2, 3);
	//printf("%s", s2);
	printf("%s", s12);
	return 0;
}
*/