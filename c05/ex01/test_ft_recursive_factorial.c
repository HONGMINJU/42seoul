/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_recursive_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:47:35 by mhong             #+#    #+#             */
/*   Updated: 2021/04/08 16:48:35 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return 1;
	return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
	int num = -200;
	printf("result : %d\n",ft_recursive_factorial(num));
}
