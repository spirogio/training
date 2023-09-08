/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:09:51 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/06 14:12:04 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*ret;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
/*
#include <stdio.h>

char	upper(unsigned int i, char c)
{
	i = i + 1;
	return ft_toupper(c);
}

int main()
{
	char *s = "this is A gOOd Day!";
	printf("%s\n", ft_strmapi(s, upper));
}
*/
