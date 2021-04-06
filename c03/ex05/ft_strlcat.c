/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:40:59 by mhong             #+#    #+#             */
/*   Updated: 2021/04/06 23:33:04 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int idx;
	unsigned int i;
	
	i = 0;
	idx = 0;
	while (dest[idx] && i < size)
	{
		idx++;
		i++;
	}
	while (*src && i + 1 < size)
	{
		dest[idx] = *src;
		idx++;
		src++;
		i++;
	}
	if (i < size)
	{
		dest[idx] = '\0';
		idx++;
		i++;
	}
	while(*src)
	{
		src++;
		i++;
	}
	return (i);
}