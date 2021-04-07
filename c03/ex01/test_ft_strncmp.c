/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 17:09:47 by mhong             #+#    #+#             */
/*   Updated: 2021/04/07 21:14:49 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (s1[i] && s2[i] && i + 1 < n)
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}

int main()
{
	char c1[]="hello world!";
	char c2[]="hello~world!";
	printf("my func => %s, %s :%d",c1,c2,ft_strncmp(c1, c2, 5));
	printf("\nfunc => %s, %s :%d\n",c1,c2,strncmp(c1, c2, 5));
}
