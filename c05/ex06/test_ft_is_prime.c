/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_is_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:36:40 by mhong             #+#    #+#             */
/*   Updated: 2021/04/11 10:14:25 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long long num;

	num = 0;
	while (num * num <= nb)
	{
		if (num * num == nb)
		{
			printf("1. this num sqrt : %lld\n",num);
			return (num);
		}
		num++;
	}
	printf("2. this num sqrt : %lld\n",num);
	return (num + 1);
}

int	ft_is_prime(int nb)
{
	int num;
	int sqrt;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	num = 2;
	sqrt = ft_sqrt(nb);
	while (num <= sqrt)
	{
		printf("divide num : %d, sqrt  : %d\n",num,sqrt);
		if (nb % num== 0)
			return (0);
		num++;
	}
	return (1);
}

int main()
{
	int num =  98;
	printf("num : %d\n",num);
	printf("result : %d\n",ft_is_prime(num));
}
