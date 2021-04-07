/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:39:33 by mhong             #+#    #+#             */
/*   Updated: 2021/04/07 22:44:02 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

bool	have_seen_before(char *base, int max_len, char what)
{
	int idx;

	idx = 0;
	while (idx < max_len)
	{
		if (base[idx++] == what)
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
		if (base[base_len] == '+' || base[base_len] == '-')
			return (false);
		if (have_seen_before(base, base_len, base[base_len]))
			return (false);
		base_len++;
	}
	if (base_len <= 1)
		return (false);
	return (true);
}

void	ft_putnbr_base_recursive(long long nbnb, char *base, int base_len)
{
	if (nbnb > base_len)
		ft_putnbr_base_recursive(nbnb / base_len, base, base_len);
	write(1, &base[nbnb % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long long	nbnb;

	nbnb = nbr;
	base_len = 0;
	if (!is_vaild_base(base))
		return ;
	if (nbnb < 0)
	{
		nbnb *= -1;
		write(1, "-", 1);
	}
	while (base[base_len])
		base_len++;
	ft_putnbr_base_recursive(nbnb, base, base_len);
}
