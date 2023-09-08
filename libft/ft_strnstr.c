/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 09:06:49 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 15:25:17 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> 

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ib;
	size_t	il;

	if (!little[0])
		return ((char *)big);
	ib = 0;
	if (!big && !len)
		return (NULL);
	while (big[ib])
	{
		il = 0;
		while (big[ib + il] && big[ib + il] == little[il] && (ib + il) < len)
			il++;
		if (little[il] == '\0')
			return ((char *) &big[ib]);
		ib++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char *b = "hello";
	printf("%s\n", strnstr((void *)0, b, 0));
	printf("%s\n", ft_strnstr((void *)0, b, 0));
}
*/
