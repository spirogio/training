/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:40:32 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 15:42:38 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		num;
	char	*s;

	sign = 1;
	num = 0;
	s = (char *)str;
	while (is_space(*s))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = 10 * num + (*s - '0');
		s++;
	}
	return (sign * num);
}
/*
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("wrong number of arguments");
		return (1);
	}
	printf("%d\n", ft_atoi(argv[1]));
}
*/
