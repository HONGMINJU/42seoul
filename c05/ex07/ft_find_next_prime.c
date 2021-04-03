/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:44:59 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 22:55:06 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	int num;

	if (nb <= 1)
		return (0);
	num = 2;
	while (num < nb)
	{
		if (nb % num++ == 0)
			return (0);
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int num;

	num = nb;
	while (!is_prime(num))
		num++;
	return (num);
}
