/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschmoll <mschmoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:09:32 by mschmoll          #+#    #+#             */
/*   Updated: 2023/09/02 16:04:56 by mschmoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_board(int *arr)
{
	int	i;
	int	printer;

	i = 0;
	while (i <= 9)
	{
		printer = arr[i] + '0';
		write(1, &printer, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	test_board(int *arr, int row)
{
	int	i;
	int	column;

	column = arr[row];
	i = row;
	while (i-- > 0)
	{
		if (arr[i] == column
			|| arr[i] == column + (row - i)
			|| arr[i] == column - (row - i))
			return (0);
	}
	row++;
	return (1);
}

void	place_queens(int *arr, int row, int *cnt)
{
	int	column;

	column = 0;
	while (column <= 9)
	{
		arr[row] = column;
		if (test_board(arr, row) == 1)
		{
			if (row < 9)
			{
				place_queens(arr, row + 1, cnt);
			}
			else
			{
				print_board(arr);
				*cnt = *cnt + 1;
			}
		}
		column++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	arr[10];
	int	cnt;

	cnt = 0;
	place_queens(arr, 0, &cnt);
	return (cnt);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_ten_queens_puzzle());
// 	return (0);
// }
