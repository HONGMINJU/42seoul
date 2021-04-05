/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 23:21:38 by mhong             #+#    #+#             */
/*   Updated: 2021/04/05 12:51:13 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <unistd.h>

int g_board[10][10];
int g_result[10];

bool	check_row(int row_num, int col_num)
{
	while (col_num >= 0)
	{
		if	(g_board[row_num][col_num--])
			return (false);
	}
	return (true);
}

bool	check_left_up(int row_num, int col_num)
{
	while (row_num >= 0 && col_num >= 0)
	{
		if (g_board[row_num--][col_num--])
			return (false);
	}
	return (true);
}

bool	check_left_down(int row_num, int col_num)
{
	while (row_num <= 9 && col_num >= 0)
	{
		if (g_board[row_num++][col_num--])
			return (false);
	}
	return (true);
}

void	init()
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			g_board[i][j++] = 0;
		}
		g_result[i] = 0;
		i++;
	}
}
void	print_board(void)
{
	char c;
	int idx;

	idx = 0;
	while (idx <= 9)
	{
		c = g_result[idx++] + '0';
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}
void	play_game(int queen)
{
	int row_idx;

	if (queen == 10)
	{
		print_board();
		return;
	}
	row_idx = 0;
	while (row_idx <= 9)
	{
		if (check_row(row_idx, queen) && check_left_up(row_idx, queen)
				&& check_left_down(row_idx, queen))
		{
			g_board[row_idx][queen] = 1;
			g_result[queen] = row_idx;
			play_game(queen + 1);
			g_board[row_idx][queen] = 0;
		}
		row_idx++;
	}	
}

int		ft_ten_queens_puzzle(void)
{
	int first_queen;

	first_queen = 0;
	while (first_queen <= 9)
	{
		g_board[first_queen][0] = 1;
		g_result[0] = first_queen;
		play_game(1);
		g_board[first_queen++][0] = 0;
	}
}


int		main()
{
	ft_ten_queens_puzzle();
}
