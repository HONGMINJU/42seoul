/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_sqrt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:30:15 by mhong             #+#    #+#             */
/*   Updated: 2021/04/08 18:37:52 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

int	ft_sqrt(int nb)
{
	long long num;

	num = 0;
	while (num * num <= nb)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}

int main()
{
	int num = 2147395600;
	printf("num : %d\n",num);
	printf("result : %d\n",ft_sqrt(num));
}
// && num < 46350