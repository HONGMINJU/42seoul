/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:52:40 by mhong             #+#    #+#             */
/*   Updated: 2021/04/11 22:26:43 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
	long long res;
	int idx;
	int *ptr;

	res = max - min;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	if(!(ptr = (int *)malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
		ptr[idx++] = min++;
	*range = ptr;
	return ((int)res);
}

 
int main()
{
	int* nums;
	printf("result : %d\n",ft_ultimate_range(&nums, 3, 8));
	int idx = 0;
	while(idx < 5)
	{
		printf("%d ",nums[idx]);
		idx++;
	}
}
