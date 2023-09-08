/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:40:16 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/07 11:10:01 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*uc;

	uc = s;
	while (n--)
	{
		*uc++ = '\0';
	}
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char *s = "hello world";
	char *d = (char *) malloc(strlen(s)+1);
	printf("%s\n", s);
	strcpy(d, s);
	printf("%s\n", d);
	bzero(d, strlen(d));
	int i=0;
	while (i < 12)
	{
		printf("%d",*((unsigned char *)d));
		i++;
	}
}
*/
