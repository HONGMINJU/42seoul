/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:30:15 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 22:35:32 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>

int	ft_sqrt(int nb)
{
	int num;

	num = 0;
	while (num * num <= nb && num < 46350)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (0);
}

int main()
{
	int num = 78;
	printf("num : %d\n",num);
	printf("result : %d\n",ft_sqrt(num));
}
