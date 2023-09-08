/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:36:43 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 09:10:04 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recur(char *res, int *i, int n)
{
	if (n > 9)
	{
		recur(res, i, n / 10);
	}
	res[*i] = '0' + n % 10;
	(*i)++;
}

static size_t	calculate_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(calculate_len(n) + 1);
	if (!res)
		return (NULL);
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_strlcpy(res, "-2147483648", 12);
			return (res);
		}
		res[i++] = '-';
		n *= -1;
	}
	recur(res, &i, n);
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv)
{
	if (argc != 2)
		printf("error");
	printf("%s\n", ft_itoa(atoi(argv[1])));
	printf("%s\n", ft_itoa(INT_MAX));
}
*/
