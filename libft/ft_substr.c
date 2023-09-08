/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:21:01 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 10:00:21 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		len = 0;
		start = 0;
	}
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
/*
#include <stdio.h>

int main()
{
	char *s = ft_substr("tripouille", 100, 1 );
	if (!s)
		return 1;
	printf("%s\n", s);
	printf("%d\n", (int)ft_strlen(s));
	free(s);
}
*/
