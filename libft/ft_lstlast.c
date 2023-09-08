/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:26:28 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 09:59:29 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int main()
{
	char *e = "end";
	t_list *temp;
	t_list d = {e, NULL};
	t_list c = {NULL, &d};
	t_list b = {NULL, &c};
	t_list a = {NULL, &b};
	temp = ft_lstlast(&a);
	printf("%s\n",(char *)temp->content);
}
*/
