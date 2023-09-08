/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 07:54:03 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 09:56:17 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	uc;
	size_t			i;

	ps = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*ps == uc)
			return ((void *)ps);
		i++;
		ps++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int main()
{
	char la[] = "this is my block of memmory";
	printf("%s\n", (char *)ft_memchr(&la[3], 'i', 5));
}
*/
