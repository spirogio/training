/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:31:49 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 01:34:15 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*st;

	st = (char *)s;
	while (*st)
		st++;
	while (st != s - 1)
	{
		if (*st == (unsigned char)c)
			return (st);
		st--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include "libft.h"

int main()
{
	char s[] = "tripouille";
	printf("%s\n", ft_strrchr(s, 't'));
	char s2[] = "hello my friend";
	ft_memset(&s2[8], '\0', 1);
	printf("%s\n", (ft_strrchr(s2, '\0')+1)); 
}
*/
