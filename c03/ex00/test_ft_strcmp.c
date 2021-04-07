/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 16:36:45 by mhong             #+#    #+#             */
/*   Updated: 2021/04/07 20:52:27 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char c1[]="helloiiii";
	char c2[]="helloao";

	printf("my func => %s, %s :%d",c1,c2,ft_strcmp(c1,c2));
	printf("\nfunc => %s, %s :%d",c1,c2,strcmp(c1,c2));
}
