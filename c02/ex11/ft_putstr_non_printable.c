/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:01:11 by mhong             #+#    #+#             */
/*   Updated: 2021/04/01 17:35:20 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char g_hex[] = "0123456789abcdef";

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	change_print(char c)
{
	ft_print('\\');
	ft_print(g_hex[c / 16]);
	ft_print(g_hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (' ' <= str[i] && str[i] <= '~')
			write(1, &str[i], 1);
		else
			change_print(str[i]);
		i++;
	}
}
