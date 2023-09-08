/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:18:43 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/07 20:35:15 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include "libft.h"
int main()
{
	char s[] = "vegamania";
	printf("%s\n", ft_strchr(s, 't' + 256));
	char s2[] = "hello";
	ft_memset(&s2[2], '\0', 1);
	printf("%s\n", (ft_strchr(s2, '\0')+1)); 
}
*/
