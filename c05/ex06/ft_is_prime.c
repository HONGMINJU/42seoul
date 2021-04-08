/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:36:40 by mhong             #+#    #+#             */
/*   Updated: 2021/04/08 21:24:32 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long num;

	num = 0;
	while (num * num <= nb)
	{
		if (num * num == nb)
			return (num);
		num++;
	}
	return (num + 1);
}

int	ft_is_prime(int nb)
{
	int num;
	int sqrt;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	num = 2;
	sqrt = ft_sqrt(nb);
	while (num <= sqrt)
	{
		if (nb % num== 0)
			return (0);
		num++;
	}
	return (1);
}
