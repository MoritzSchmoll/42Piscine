/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:56:35 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/07 14:24:21 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	plus(int nbr1, int nbr2);
void	minus(int nbr1, int nbr2);
void	multiply(int nbr1, int nbr2);
void	divide(int nbr1, int nbr2);
void	modulo(int nbr1, int nbr2);

void	printer(int i, int nb, int mod);
void	getlength(int *temp, int *i, int *mod);
void	ft_putnbr(int nb);
int		calculator(char *str, int i, int signchanger);
int		ft_atoi(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

void	selectoperator(void (**p)(int, int), char **argv)
{
	int	nbr1;
	int	nbr2;

	nbr1 = ft_atoi(argv[1]);
	nbr2 = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		(p[0])(nbr1, nbr2);
	else if (argv[2][0] == '-')
		(p[1])(nbr1, nbr2);
	else if (argv[2][0] == '*')
	{
		(p[2])(nbr1, nbr2);
	}
	else if (argv[2][0] == '/')
		(p[3])(nbr1, nbr2);
	else if (argv[2][0] == '%')
		(p[4])(nbr1, nbr2);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;
	void	(*p[5])(int, int);

	i = 0;
	p[0] = plus;
	p[1] = minus;
	p[2] = multiply;
	p[3] = divide;
	p[4] = modulo;
	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	selectoperator(p, argv);
	return (0);
}
