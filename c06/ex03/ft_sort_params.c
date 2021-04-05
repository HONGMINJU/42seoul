/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:20:45 by mhong             #+#    #+#             */
/*   Updated: 2021/04/05 17:18:07 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

void	print(char *str)
{
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return (*str1 > *str2);
		str1++;
		str2++;
	}
	return (0);
}

void	main(int argc, char **argv)
{
	int		sorted_num;
	int		sort_start;
	int		idx;
	char	*tmp;

	sorted_num = 0;
	while (sorted_num < argc - 1)
	{
		sort_start = 1;
		while (sort_start <= argc - sorted_num - 2)
		{
			if (ft_strcmp(argv[sort_start], argv[sort_start + 1]))
			{
				tmp = argv[sort_start];
				argv[sort_start] = argv[sort_start + 1];
				argv[sort_start + 1] = tmp;
			}
			sort_start++;
		}
		sorted_num++;
	}
	idx = 1;
	while (idx <= argc - 1)
		print(argv[idx++]);
}
