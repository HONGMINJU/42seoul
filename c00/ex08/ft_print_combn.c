/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:53:17 by mhong             #+#    #+#             */
/*   Updated: 2021/03/29 19:34:40 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int g_nums[10];

void	print_nums(int n)
{
	int		i;
	bool	flag;
	char	c;

	i = 0;
	flag = true;
	while (i < n)
	{
		c = g_nums[i] + '0';
		if (g_nums[i] != 10 - n + i)
		{
			flag = false;
		}
		write(1, &c, 1);
		i++;
	}
	if (!flag)
	{
		write(1, ", ", 2);
	}
}

void	func(int idx, int n)
{
	int num;

	num = g_nums[idx - 1];
	if (idx == n)
	{
		print_nums(n);
	}
	else
	{
		while (num < 10 - n + idx)
		{
			g_nums[idx] = num + 1;
			func(idx + 1, n);
			num++;
		}
	}
}

void	ft_print_combn(int n)
{
	int first;

	first = 0;
	while (first < 10 - n + 1)
	{
		g_nums[0] = first;
		func(1, n);
		first++;
	}
}

