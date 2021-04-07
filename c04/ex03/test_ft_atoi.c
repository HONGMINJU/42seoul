/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:02:44 by mhong             #+#    #+#             */
/*   Updated: 2021/04/07 22:20:17 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

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
	bool	is_minus;

	number = 0;
	is_minus = false;
	while (*str && is_space(*str))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			is_minus = !is_minus;
		str++;
	}
	while (*str && is_number(*str))
	{
		number = (number * 10) + (*str - '0');
		str++;
	}
	if (is_minus)
		number *= -1;
	return (number);
}

int main()
{
	char c[]="  	--+-21474836048ff";
	printf("str : %s\n",c);
	printf("number : %d\n",ft_atoi(c));
}
