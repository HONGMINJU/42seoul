/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:28:25 by mhong             #+#    #+#             */
/*   Updated: 2021/04/11 23:28:46 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char			*ft_strcat(char *str1, char *str2)
{
	while (*str2)
		*str1++ = *str2++;
	*str1 = '\0';
	return (str1);
}

int				ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	calculate_total_len(int size, char **strs, char *sep)
{
	int			idx;
	unsigned	total_len;

	total_len = 0;
	idx = 0;
	while (idx < size)
		total_len += ft_strlen(strs[idx++]);
	total_len += ((size - 1) * ft_strlen(sep));
	return (total_len);
}

char			*ft_strjoin(int size, char **strs, char *sep)
{
	unsigned int	total_len;
	int				idx;
	char			*result;
	char			*ptr;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char) * 1);
		*result = '\0';
		return (result);
	}
	total_len = calculate_total_len(size, strs, sep);
	if (!(result = (char *)malloc(sizeof(char) * (total_len + 1))))
		return (NULL);
	idx = 0;
	ptr = result;
	result[0] = '\0';
	result = ft_strcat(result, strs[idx++]);
	while (idx < size)
	{
		result = ft_strcat(result, sep);
		result = ft_strcat(result, strs[idx++]);
	}
	*result = '\0';
	return (ptr);
}

int main()
{
	char *strs[] = {"minju","hello","world","!!",""};
	char *sep ="~";
	int size = 5;
	char *result = ft_strjoin(size,strs,sep);
	printf("%s\n",result);
}
