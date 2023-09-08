/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:03:02 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/07 10:57:58 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	uc;

	ps = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n > 0)
	{
		*ps++ = uc;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>
#include "ft_strrchr.c"
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *s;
		s = (char *)malloc(19);
		strcpy(s, "this is a sentence");
		printf("%s\n", s);
		ft_memset(ft_strrchr(s,'s'), argv[1][0], 8);
		printf("%s\n", s);
	}
}
*/
