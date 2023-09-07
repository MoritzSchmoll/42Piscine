/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:31:52 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/22 15:32:05 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*a;
	char	*b;
	char	*c;

	i = 0;
	if (*to_find == 0)
		return (str);
	while (*str != 0)
	{
		a = str;
		b = to_find;
		if (*a == *b)
		{
			c = a;
			while (*++a == *++b && *b != 0)
				continue ;
			if (*b == 0)
				return (c);
		}
		str++;
	}
	return (0);
}

/*
int main()
{
	char s1[40] = "Testungstrings456456";
	char s2[20] = "\0";
	//char temp[20] = "";
	printf("%s", ft_strstr(s1, s2));
	printf("\n");
	printf("%s", strstr(s1, s2));
	//printf("%s", s2);
	//printf("%s", temp);
	return 0;
}
*/