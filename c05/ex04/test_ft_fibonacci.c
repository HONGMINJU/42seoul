/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_fibonacci.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:08:44 by mhong             #+#    #+#             */
/*   Updated: 2021/04/08 18:17:21 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index, int before_before, int before)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (before_before);
	if (index == 1)
		return (before);
	return (ft_fibonacci(index - 1, before, before_before + before));
}
int main()
{
	int num = -21474;
	printf("num : %d\n",num);
	printf("result : %d\n",ft_fibonacci(num, 0, 1));
}
