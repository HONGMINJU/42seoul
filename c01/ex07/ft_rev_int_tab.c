/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 20:31:37 by mhong             #+#    #+#             */
/*   Updated: 2021/03/31 05:04:34 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int tmp;
	int left;
	int right;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		tmp = tab[left];
		tab[left] = tab[right];
		tab[right] = tmp;
		left++;
		right--;
	}
}
