/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:28:32 by mhong             #+#    #+#             */
/*   Updated: 2021/04/01 18:40:03 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	find_str(char *str, char *to_find)
{
	while (*to_find)
	{
		if (*str++ != *to_find++)
			return (false);
	}
	return (true);
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (*str == *to_find && find_str(str, to_find))
			return (str);
		str++;
	}
	return (str);
}
