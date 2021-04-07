/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:28:32 by mhong             #+#    #+#             */
/*   Updated: 2021/04/07 21:19:43 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	find_str(char *str, char *to_find)
{
	char *str_ptr;
	char *to_find_ptr;

	str_ptr = str;
	to_find_ptr = to_find;
	while (*to_find_ptr)
	{
		if (*str_ptr++ != *to_find_ptr++)
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
