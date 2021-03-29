/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 21:29:12 by mhong             #+#    #+#             */
/*   Updated: 2021/03/28 21:51:47 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int num)
{
	char c;

	if (num < 9)
	{
		c = '0' + num;
		write(1, "0", 1);
		write(1, &c, 1);
	}
	else
	{
		c = (num / 10) + '0';
		write(1, &c, 2);
		c = (num % 10) + '0';
		write(1, &c, 2);
	}
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	while (first < 100)
	{
		second = first + 1;
		while (second < 100)
		{
			print_num(first);
			write(1, " ", 1);
			print_num(second);
			if (first != 98 || second != 99)
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}
}

int		main(void)
{
	ft_print_comb2();
}

