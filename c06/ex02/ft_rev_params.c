/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:56:19 by mhong             #+#    #+#             */
/*   Updated: 2021/04/05 15:03:07 by mhong            ###   ########.fr       */
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
	while (argc-- > 1)
	{
		write(1, argv[argc], ft_strlen(argv[argc]));
		write(1, "\n", 1);
	}
}
