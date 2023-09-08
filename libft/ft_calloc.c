/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:26:43 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 09:12:53 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE_MAX (18446744073709551615UL)

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			len;
	void			*res;
	unsigned char	*temp;

	if (nmemb <= 0 || size <= 0)
	{
		temp = ((unsigned char *)malloc(1));
		ft_bzero(temp, 1);
		return ((void *)temp);
	}
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	len = nmemb * size;
	if (len < nmemb || len < size)
	{
		return (NULL);
	}
	res = (void *)malloc(len);
	if (!res)
		return (NULL);
	ft_bzero(res, len);
	return (res);
}
/*
#include <stdio.h>

int main()
{
	void *t;
	t = ft_calloc(2,2);
	if (!t)
		return 1;
	for(int i = 0; i < 5; i++)
		t[i]=i;
	for(int i = 0; i < 5; i++)
		printf("%d ", t[i]);
}
*/
/*
	size_t	len;
	void	*res;

	len = nmemb * size;
	if (len < nmemb || len < size)
		return (NULL);
	res = (void *)malloc(len);
	if (!res)
		return (NULL);
	ft_bzero(res, len);
	return (res);
}
*/
