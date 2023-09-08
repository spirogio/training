/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:00:58 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 16:01:23 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_strncpy(char *dest, const char *src, int n)
{
	char	*dst;

	dst = dest;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (dst);
}

static char	*find_word(const char *str, char c)
{
	char	*b;
	char	*m;
	int		len;

	b = (char *)str;
	len = 0;
	while (*b && (*b != c))
	{
		len++;
		b++;
	}
	if (len > 0)
	{
		m = malloc(len + 1);
		if (!m)
			return (NULL);
		ft_strncpy(m, str, len);
		return (m);
	}
	return (0);
}

static int	count_words(const char *str, char c)
{
	int		count;
	char	*b;
	int		len;

	b = (char *)str;
	count = 0;
	len = 0;
	while (*b)
	{
		while (*b && (*b == c))
			b++;
		len = 0;
		while (*b && (*b != c))
		{
			len++;
			b++;
		}
		if (len > 0)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	**ret_arr;
	char	*word;
	int		count;

	if (!s)
		return (NULL);
	array = NULL;
	count = count_words(s, c);
	array = (char **)malloc(sizeof (char *) * (count + 1));
	if (!array)
		return (NULL);
	ret_arr = array;
	while (*s)
	{
		while (*s && (*s == c))
			s++;
		word = find_word(s, c);
		if (word)
			*array++ = word;
		while (*s && (*s != c))
			s++;
	}
	*array = NULL;
	return (ret_arr);
}
/*
#include <stdio.h>
int main()
{
	char *a = "asdf:asdf:spiros:aleos";
	char c = ':';
	printf("%d\n", count_words(a, c));
	char **t = ft_split(a, c);
	while (*t)
	{
		printf("%s\n", *t);
		t++;
	}
}
*/
