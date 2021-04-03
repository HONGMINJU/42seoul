/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:20:57 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 21:32:51 by mhong            ###   ########.fr       */
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

bool	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
			|| c == '\v' || c == '\f' || c == '\r');
}

bool	is_vaild_base(char *base)
{
	int base_len;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '-' || base[base_len] == '+')
			return (false);
		if (is_space(base[base_len]))
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

int		ft_atoi_base(char *str, char *base)
{
	int base_idx;
	int base_len;
	int str_len;
	int cnt;
	int num;

	num = 0;
	base_len = ft_strlen(base);
	str_len = ft_strlen(str);
	cnt = 1;
	if (!is_vaild_base(base))
	{
		return (0);
	}
	while (str_len-- > 0)
	{
		base_idx = 0;
		while (base[base_idx] != str[str_len])
			base_idx++;
		num = num + (cnt * base_idx);
		cnt *= base_len;
	}
	return (num);
}
