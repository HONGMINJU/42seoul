/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_range.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:29:33 by mhong             #+#    #+#             */
/*   Updated: 2021/04/11 15:52:21 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *res;
	int *ptr;

	if (max <= min)
		return (NULL);
	res = (int *)malloc(sizeof(int) * (max - min));
	ptr = res;
	while (min < max)
	{
		*res++ = min++;
	}
	return (ptr);
}