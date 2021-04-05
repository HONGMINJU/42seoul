/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:45:35 by mhong             #+#    #+#             */
/*   Updated: 2021/04/05 14:54:51 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

void	main(int argc, char **argv)
{
	int idx;

	idx = 1;
	while (idx < argc)
	{
		write(1, argv[idx], ft_strlen(argv[idx]));
		write(1, "\n", 1);
		idx++;
	}
}
