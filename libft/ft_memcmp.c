/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 08:36:58 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/05 08:58:28 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*uc1;
	const unsigned char	*uc2;
	size_t				i;

	uc1 = s1;
	uc2 = s2;
	i = 0;
	while (i < n)
	{
		if (uc1[i] != uc2[i])
			return (uc1[i] - uc2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	char ex1[] = "the son of bladder";
	char ex2[] = "the son of bladdea";
	printf("%d\n", ft_memcmp(ex1, ex2, sizeof(ex1)));
}
*/
