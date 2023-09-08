/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:36:57 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 01:33:49 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			end = ft_lstlast(*lst);
			end->next = new;
		}
	}
}
/*
#include <stdio.h>
int main()
{
	char *e = "temp_end";
	t_list t = {e, NULL};
	t_list *temp = &t;
	temp->content = e;
	temp->next = NULL;

	t_list d = {NULL, NULL};
	t_list c = {NULL, &d};
	t_list b = {NULL, &c};
	t_list a = {NULL, &b};
	t_list *ap = &a;
	ft_lstadd_back(&ap, temp);
	
	t_list *templ;
	templ = ft_lstlast(ap);
	printf("%s\n",(char *)templ->content);
}
*/
