/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_iterative_power.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:54:12 by mhong             #+#    #+#             */
/*   Updated: 2021/04/08 16:51:42 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb,int power)
{
	int i;
	int number;

	number = 1;
	i = 0;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i++ < power)
	{
		number *= nb;
	}
	return (number);
}

int main()
{
	int num = -2;
	int power = 3;
	printf("num : %d\n", num);
	printf("power : %d\n", power);
	printf("result : %d\n", ft_iterative_power(num, power));
}
