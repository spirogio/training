/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:58:26 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 16:04:14 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	upper(unsigned int i, char *c)
{
	i = i + 1;
	*c = ft_toupper(*c);
}

int main()
{
	char s[] = "this is A gOOd Day!";
	ft_striteri(s, upper);
	printf("%s\n", s);
}
*/	
