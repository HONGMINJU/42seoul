/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhong <mhong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 18:40:59 by mhong             #+#    #+#             */
/*   Updated: 2021/04/03 16:06:49 by mhong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int dest_size;

	dest_size = 0;
	while(dest[dest_size++])
		;
	dest_size -= 1;
	while(*src && dest_size + 1 < size)
	{
		dest[dest_size++] = *src++;
	}
	dest[dest_size]='\0';
	return (dest_size);
}

int main(){
	char des[]="hello ";
	char src[]="world!1234";
	printf("----before----\n");
	printf("des : %s\n",des);
	printf("src : %s\n",src);
	printf("return val : %d\n",ft_strlcat(des,src,41));
	printf("----after----\n");
	printf("des : %s\n",des);
			
}	
