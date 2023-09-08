/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:59:45 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 00:26:14 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		begin_idx;
	int		end_idx;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	begin_idx = 0;
	end_idx = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[begin_idx]) && begin_idx <= end_idx)
		begin_idx++;
	if (begin_idx > end_idx)
		return (ft_strdup(s1 + end_idx + 1));
	while (ft_strchr(set, s1[end_idx]) && end_idx >= 0)
		end_idx--;
	str = malloc(end_idx - begin_idx + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[begin_idx], end_idx - begin_idx + 2);
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char *s = "tripouille   xxx";
	printf("%s\n", ft_strtrim(s, " x"));
	char *k = ft_strtrim(s, " x");
	if (!ft_strncmp(k, "tripouille", 10))
		printf("equal\n");

}
*/
