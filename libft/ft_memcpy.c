/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:05:40 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/07 11:29:28 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dp;
	unsigned char	*sp;

	dp = (unsigned char *)dest;
	sp = (unsigned char *)src;
	if ((dp == src) || !n)
		return (dest);
	while (n-- > 0)
	{
		*dp++ = *sp++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s = "mystring";
	for(int i = 0; i < 20 ; i++)
		printf("%3d ", (int)(s[i]));
	printf("\n");
	char *t = (char *)malloc(9);
	for(int i = 0; i < 20 ; i++)
		printf("%3d ", (int)(t[i]));
	printf("\n");
	ft_memcpy(t, s, 8);
	for(int i = 0; i < 20 ; i++)
		printf("%3d ", (int)(t[i]));
	printf("\n");
	printf("%s\n", t);
}
*/
