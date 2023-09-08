/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:13:00 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 10:00:06 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strdup(const char *src)
{
	char	*sr;
	char	*ret;
	int		len;
	char	*itersrc;

	len = ft_strlen(src);
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	sr = ret;
	itersrc = (char *)src;
	while (*itersrc)
	{
		*ret++ = *itersrc++;
	}
	*ret = '\0';
	return (sr);
}
/*
#include <stdio.h>

int main()
{
	char a[] = "aasd";
	char *b = ft_strdup(a);
	printf("%s\n", b);
	free(b);
}
*/
