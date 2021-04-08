/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:44:59 by mhong             #+#    #+#             */
/*   Updated: 2021/04/08 21:27:57 by mhong            ###   ########.fr       */
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

int	is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	int num;
	
	if(nb < 2)
		num = 2;
	else
		num = nb;
	while(!is_prime(num))
		num++;
	return (num);
}
