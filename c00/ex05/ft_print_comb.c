/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 18:39:37 by mhong             #+#    #+#             */
/*   Updated: 2021/03/28 22:05:29 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (a++ < 9)
	{
		b = a;
		while (b++ < 9)
		{
			c = b;
			while (c++ < 9)
			{
				print(a, b, c);
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
}

