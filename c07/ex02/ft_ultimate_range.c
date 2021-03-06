/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:52:40 by mhong             #+#    #+#             */
/*   Updated: 2021/04/11 22:27:53 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
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
	if (!(ptr = (int *)malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
		ptr[idx++] = min++;
	*range = ptr;
	return ((int)res);
}
