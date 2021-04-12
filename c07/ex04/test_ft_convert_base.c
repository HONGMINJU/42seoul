/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_convert_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:14:35 by mhong             #+#    #+#             */
/*   Updated: 2021/04/12 14:16:50 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int		g_base[2][256];
int		g_base2_len;
int		g_new_str_len;
char	*g_new_str;
int		g_num;
bool	g_is_minus;

bool	is_valid_base(char *str, int what_base)
{
	int len;

	len = 0;
	while (str[len])
	{
		if (str[len] == '-' || str[len] == '+')
			return (false);
		if (g_base[what_base - 1][str[len]])
			return (false);
		g_base[what_base - 1][str[len]] = 1;
		len++;
	}
	return (true);
}

void	init(void)
{
	int idx;

	idx = 0;
	while (idx < 256)
	{
		g_base[0][idx] = 0;
		g_base[1][idx] = 0;
		idx++;
	}
	g_num = 0;
	g_base2_len = 0;
	g_new_str_len = 0;
	g_is_minus = false;
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int		ft_atoi_base(char *nbr, char *base)
{
	int num;
	int base_len;
	int idx;

	num = 0;
	base_len = ft_strlen(base);
	while (*nbr && (*nbr == ' ' || *nbr == '\n' || *nbr == '\t' ||
				*nbr == '\r' || *nbr == '\f' || *nbr == '\v'))
		nbr++;
	while (*nbr && (*nbr == '-' || *nbr == '+'))
	{
		if (*nbr == '-')
			g_is_minus = !g_is_minus;
		nbr++;
	}
	while (*nbr && g_base[0][*nbr])
	{
		idx = 0;
		while (base[idx] != *nbr)
			idx++;
		num = (num * base_len) + idx;
		nbr++;
	}
	return (num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int tmp;

	init();
	if (!is_valid_base(base_from, 1) || !is_valid_base(base_to, 2))
		return (NULL);
	g_num = ft_atoi_base(nbr, base_from);
	tmp = g_num;
	g_base2_len = ft_strlen(base_to);
	while (tmp)
	{
		tmp /= g_base2_len;
		g_new_str_len++;
	}
	g_new_str_len = (g_is_minus ? g_new_str_len + 1 : g_new_str_len);
	if (!(g_new_str = (char *)malloc(sizeof(char) * (g_new_str_len + 1))))
		return (NULL);
	g_new_str[g_new_str_len--] = '\0';
	while (g_num)
	{
		g_new_str[g_new_str_len] = base_to[g_num % g_base2_len];
		g_num /= g_base2_len;
		g_new_str_len--;
	}
	g_new_str[0] = (g_is_minus ? '-' : g_new_str[0]);
	return (g_new_str);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("nbr : %s\n", argv[1]);
	printf("base1 : %s\n", argv[2]);
	printf("base2 : %s\n", argv[3]);
	printf("convert : %s\n", ft_convert_base(argv[1], argv[2], argv[3]));

}
