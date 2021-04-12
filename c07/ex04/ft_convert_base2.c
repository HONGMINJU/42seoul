/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minju <minju@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 00:25:10 by minju             #+#    #+#             */
/*   Updated: 2021/04/13 00:25:20 by minju            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_base_error(char *base);

void	ft_putnbr_getout(char *retour, char c, int *i)
{
	retour[*i] = c;
	*i += 1;
}

void	ft_putnbr_base(int nbr, char *base, char *retour, int *i)
{
	long	nb;
	long	len;

	len = ft_base_error(base);
	if (len >= 2)
	{
		if (nbr < 0)
		{
			ft_putnbr_getout(retour, '-', i);
			nb = nbr;
			nb *= -1;
		}
		else
			nb = nbr;
		if (nb > len)
		{
			ft_putnbr_base(nb / len, base, retour, i);
			ft_putnbr_base(nb % len, base, retour, i);
		}
		else
		{
			ft_putnbr_getout(retour, base[nb], i);
		}
	}
}
