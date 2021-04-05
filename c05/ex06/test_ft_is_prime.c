/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:36:40 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 22:43:32 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int num;

	if (nb <= 1)
		return (0);
	num = 2;
	while (num < nb)
	{
		if (nb % num++ == 0)
			return (0);
	}
	return (1);
}

int main()
{
	int num = -647;
	printf("num : %d\n",num);
	printf("result : %d\n",ft_is_prime(num));
}