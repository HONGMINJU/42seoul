/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:39:33 by mhong             #+#    #+#             */
/*   Updated: 2021/04/11 16:25:33 by mhong            ###   ########.fr       */
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

void	ft_putnbr_base_recursive(unsigned int nb, char *base, unsigned int len)
{
	if (nb >= len)
		ft_putnbr_base_recursive(nb / len, base, len);
	write(1, &base[nb % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;
	unsigned int	nb;

	nb = nbr;
	if (!is_vaild_base(base))
		return ;
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	base_len = 0;
	while (base[base_len])
		base_len++;
	ft_putnbr_base_recursive(nb, base, base_len);
}
