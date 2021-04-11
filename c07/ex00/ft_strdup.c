/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 15:17:42 by mhong             #+#    #+#             */
/*   Updated: 2021/04/11 19:47:49 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long long ft_strlen(char *str)
{
	long long i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	int idx;
	long long len;
	char *res;

	len = ft_strlen(src);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	idx = 0;
	while (src[idx])
	{
		res[idx] = src[idx];
		idx++;
	}
	res[idx] = '\0';
	return (res);
}