/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:12:33 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/06 18:25:37 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		len++;
	}
	return (len + 1);
}
/*
#include <stdio.h>

int main()
{
	t_list d = {NULL, NULL};
	t_list c = {NULL, &d};
	t_list b = {NULL, &c};
	t_list a = {NULL, &b};
	printf("%d\n", ft_lstsize(&a));
}
*/
