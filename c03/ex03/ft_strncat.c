/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:19:43 by mhong             #+#    #+#             */
/*   Updated: 2021/04/06 12:40:16 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*ptr;
	unsigned int		i;

	ptr = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i++ < nb)
		*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}
