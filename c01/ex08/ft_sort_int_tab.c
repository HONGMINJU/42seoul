/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 20:59:45 by mhong             #+#    #+#             */
/*   Updated: 2021/03/29 21:29:05 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int cnt;
	int idx;
	int tmp;

	cnt = 0;
	while (cnt < size)
	{
		idx = 0;
		while (idx < size - cnt)
		{
			if (tab[idx] > tab[idx + 1])
			{
				tmp = tab[idx];
				tab[idx] = tab[idx + 1];
				tab[idx + 1] = tmp;
			}
			idx++;
		}
		cnt++;
	}
}
