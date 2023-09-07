/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:44:30 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/22 15:07:22 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	controller(char *str, int i, int *isnewword)
{
	if (str[i] >= 32 && str[i] <= 126
		&& !(((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z'))
			|| (str[i] >= '0' && str[i] <= '9')))
	{
			*isnewword = 1;
	}
	else if (str[i] >= '0' && str[i] <= '9')
	{
		*isnewword = 0;
	}
	else if (str[i] >= 'a' && str[i] <= 'z' && *isnewword == 1)
	{
		str[i] = str[i] - 32;
		*isnewword = 0;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z' && *isnewword == 0)
	{
		str[i] = str[i] + 32;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z' )
	{
		*isnewword = 0;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	size;
	int	i;
	int	isnewword;

	size = 0;
	while (str[size] != 0)
	{
		size++;
	}
	isnewword = 1;
	i = 0;
	while (i < size)
	{
		controller(str, i, &isnewword);
		i++;
	}
	return (str);
}

/*
int main()
{
	char str[] = "dESTfh4 h78 5sd dapiDDADSal-letter 8jd 'd7d6";
	int i;
	i = 0;
	printf("%s", ft_strcapitalize(str));
	return 0;
}
*/