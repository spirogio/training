/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:28:03 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 14:49:50 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	while (dest && *dest)
	{
		dest_len++;
		dest++;
	}
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (size + src_len);
	i = size - dest_len - 1;
	while ((i > 0) && *src)
	{
		*dest++ = *src++;
		i--;
	}
	*dest = '\0';
	return (dest_len + src_len);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int main()
{
	char a[100] = "It's Gotham city. I am ";
	char b[] = "the Batman.";
	printf("%d\n", (int)strlcat((void *)0, b, 2));
	printf("%d\n", (int)ft_strlcat((void *)0, b, 2));
	printf("%s\n", a);
}
*/
