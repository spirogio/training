/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 20:16:57 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/07 12:40:22 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (*(src + len))
		++len;
	if (size == 0)
		return (len);
	while (*(src + i) && --size)
	{
		*dest = *(src + i);
		dest++;
		i++;
	}
	*dest = '\0';
	return (len);
}
/*
#include<unistd.h>
#include<stdio.h>
int main()
{
    char destination[300]="thisiaverylon" \
         "gstringiwroteitthatwa" \
         "yonpurposesoitsverylong";
    char *source = "tabile";
    printf("%d\n", (int)ft_strlcpy(destination, source, (size_t)10));
    int i = 0;
    char a;
    while(i < 300)
    {
        a = destination[i++];
        if (a=='\0')
           a = '*';
        write(1 ,&a ,1);
    }
}
*/
