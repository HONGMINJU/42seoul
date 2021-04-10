/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:20:57 by mhong             #+#    #+#             */
/*   Updated: 2021/04/08 10:22:20 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	have_seen_before(char *base, int max_len, char what)
{
	int i;

	i = 0;
	while (i < max_len)
	{
		if (base[i++] == what)
			return (true);
	}
	return (false);
}

bool	is_vaild_base(char *base)
{
	int base_len;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '-' || base[base_len] == '+')
			return (false);
		if ((base[base_len] == ' ' || base[base_len] == '\n' ||
		base[base_len] == '\t' || base[base_len] == '\v' ||
		base[base_len] == '\f' || base[base_len] == '\r'))
			return (false);
		if (have_seen_before(base, base_len, base[base_len]))
			return (false);
		base_len++;
	}
	if (base_len <= 1)
		return (false);
	return (true);
}

int		ft_strlen(char *str)
{
	int str_len;

	str_len = 0;
	while (str[str_len])
		str_len++;
	return (str_len);
}

int		recur_func(char *str, char *base, int base_len, int num)
{
	int idx;

	if (!*str || *str < '0' || '9' < *str)
		return (num);
	idx = 0;
	while (*str != base[idx])
		idx++;
	num = (num * base_len) + idx;
	return (recur_func(++str, base, base_len, num));
}

int		ft_atoi_base(char *str, char *base)
{
	int		base_len;
	bool	minus_flag;
	int		result;

	minus_flag = false;
	base_len = ft_strlen(base);
	result = 0;
	if (!is_vaild_base(base))
		return (0);
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
	*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			minus_flag = !minus_flag;
		str++;
	}
	result = recur_func(str, base, base_len, 0);
	return (minus_flag ? (-1) * result : result);
}
