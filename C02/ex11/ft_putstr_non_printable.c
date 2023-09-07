/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:52:53 by mschmoll          #+#    #+#             */
/*   Updated: 2023/08/22 15:56:05 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	helper1(int ascii)
{
	if (ascii > 9)
	{
		ascii = ascii + 'a' - 10;
		write (1, &ascii, 1);
	}
	else
	{
		ascii = ascii + 48;
		write (1, &ascii, 1);
	}
}

void	converter(char *str, int i)
{
	char	printer;
	int		ascii;

	printer = 92;
	ascii = (int)((unsigned char)str[i]);
	write(1, &printer, 1);
	helper1 (ascii / 16);
	helper1 (ascii % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write (1, &str[i], 1);
		}
		else
		{
			converter(str, i);
		}
		i++;
	}
}

/*
int	main()
{
	char test[12] = {2,3,6,127,56,87,45,65,68,243};
	//char test[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(test);
	//converter(test, 0);
	return 0;
}
*/