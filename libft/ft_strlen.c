/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:41:47 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/07 10:40:07 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
/*
#include <stdio.h>

int main()
{
	char *s = "hello world";
	printf("%s\n", s);
	printf("%d\n", (int)ft_strlen(s));	
}
*/
