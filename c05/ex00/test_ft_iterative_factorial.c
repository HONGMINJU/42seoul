/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:36:25 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 21:45:36 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int num;
	int cnt;
	if (nb < 0)
	{
		return (0);
	}
	num = 1;
	cnt = 1;
	while (cnt <= nb)
	{
		num *= cnt++;
	}
	return (num);
}

int main()
{
	int num = 0;
	printf("result :%d\n",ft_iterative_factorial(num));
}
