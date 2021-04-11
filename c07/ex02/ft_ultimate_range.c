/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:52:40 by mhong             #+#    #+#             */
/*   Updated: 2021/04/11 20:20:51 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	long long res;

	res = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	range[0] = (int *)malloc(sizeof(int) * (max - min));
	if(!range[0])
		return (-1);
	while (min < max)
	{
		*(range[0])++ = min++;
	}
	return ((int)res);
}

 
int main()
{
	int** nums;
	printf("result : %d\n",ft_ultimate_range(nums, 3, 8));
	while(*nums[0])
	{
		printf("%d ",*nums[0]);
		nums[0]++;
	}
}