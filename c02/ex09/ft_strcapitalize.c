/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 23:58:23 by mhong             #+#    #+#             */
/*   Updated: 2021/04/01 14:23:10 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	is_word(char c)
{
	if ('0' <= c && c <= '9')
		return (true);
	if ('a' <= c && c <= 'z')
		return (true);
	if ('A' <= c && c <= 'Z')
		return (true);
	return (false);
}

char	*ft_strcapitalize(char *str)
{
	bool	in_word;
	int		i;

	i = 0;
	in_word = false;
	while (str[i])
	{
		if (in_word)
		{
			if ('A' <= str[i] && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
		else
		{
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 'a' + 'A';
		}
		if (!is_word(str[i]))
			in_word = false;
		else
			in_word = true;
		i++;
	}
	return (str);
}
