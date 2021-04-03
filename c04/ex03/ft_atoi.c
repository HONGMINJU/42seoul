/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:02:44 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 17:37:42 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
			|| c == '\v' || c == '\f' || c == '\r');
}

bool	is_number(char c)
{
	return ('0' <= c && c <= '9');
}

int		ft_atoi(char *str)
{
	int		number;
	int		minus_cnt;
	bool	is_minus;

	number = 0;
	minus_cnt = 0;
	while (*str && is_space(*str))
		str++;
	while (*str && !is_number(*str))
	{
		if (*str == '-')
			minus_cnt++;
		str++;
	}
	is_minus = (minus_cnt % 2 == 1 ? true : false);
	while (*str && is_number(*str))
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	if (is_minus)
		number *= -1;
	return (number);
}
