/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:01:36 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 22:06:55 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

int main()
{
	int num = 1;
	int power = 3;
	printf("num : %d\n",num);
	printf("power : %d\n",power);
	printf("result : %d\n",ft_recursive_power(num,power));
}
