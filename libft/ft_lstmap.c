/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:54:03 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 09:11:02 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*newp;

	if (!lst | !f)
		return (NULL);
	newp = ft_lstnew(f(lst->content));
	if (!newp)
		ft_lstclear(&lst, del);
	new = newp;
	lst = lst->next;
	while (lst)
	{
		newp = ft_lstnew(f(lst->content));
		if (!newp)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new, newp);
	}
	return (new);
}
/*
#include <stdio.h>

void	print_lst(t_list *lst){
	while(lst)
	{
		printf("%s ", (char *)lst->content);
		lst = lst->next;
	}
	printf("\n");
}

void	*upper(void *c)
{
	char str;
	char *st;
	
	st = (char *)c;
	str = *((char *)c);
	*st = ft_toupper(str); 
	return (void *)st;
}

void	delete(void *p)
{
	p = NULL;
}

int main()
{
	char a_str[] = "al";
	char b_str[] = "bl";
	char c_str[] = "cl";
	char d_str[] = "dl";

	t_list d11 = {d_str, NULL};
	t_list c11 = {c_str, &d11};
	t_list b11 = {b_str, &c11};
	t_list a11 = {a_str, &b11};
	
	t_list *templ = ft_lstmap(&a11, upper, delete);
	print_lst(templ);
}
*/
