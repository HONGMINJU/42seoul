/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 21:47:35 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 21:52:22 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return 1;
	return (nb * ft_recursive_factorial(nb - 1));
}

int main()
{
	int num = 11;
	printf("result : %d\n",ft_recursive_factorial(num));
}
