/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:28:32 by mhong             #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/04/10 20:43:01 by mhong            ###   ########.fr       */
=======
/*   Updated: 2021/04/08 13:53:45 by mhong            ###   ########.fr       */
>>>>>>> c42d4c372a94d191a73f6127fa864e7674781dfb
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
<<<<<<< HEAD
	int i;
	int j;

	i = 0;
	if (!to_find[0])
		return (str);
	while (str[i])
=======
	if (!*to_find)
		return (str);
	while (*str)
>>>>>>> c42d4c372a94d191a73f6127fa864e7674781dfb
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
		{
			if (!to_find[j + 1])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
