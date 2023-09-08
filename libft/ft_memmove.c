/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:41:15 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 12:33:21 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dp;
	unsigned char	*sp;

	dp = (unsigned char *)dest;
	sp = (unsigned char *)src;
	if (dp == sp || !n)
		return (dest);
	if ((sp < dp) && (dp < sp + n))
	{
		dp += n - 1;
		sp += n - 1;
		while (n)
		{
			*dp-- = *sp--;
			n--;
		}
	}
	else
		while (n--)
			*dp++ = *sp++;
	return (dest);
}
/*
#include <stdio.h>
#include "ft_strrchr.c"
#include "ft_strlen.c"
#include <stdlib.h>
int main()
{
	char s1[] = "this is a string of letters that i'll combine";
	int len = ft_strlen(s1);
	for(int i = 0; i < len; i++)
		printf("%c", s1[i]); 
	printf("\n");
	char *s2 = ft_strrchr(s1, 't');
	ft_memmove(s1, s2, 14);
	for(int i = 0; i < len; i++)
		printf("%c", s1[i]); 
	printf("\n");
}
*/
/*
#include <stdio.h>
#include "ft_strrchr.c"
#include "ft_strlen.c"
#include <stdlib.h>
int main()
{
	char sResult[] = {67,68,67,68,69,0,45};
	char sResult2[] ={67,67,68,68,69,0,45};
//char sResult2[] = {67,67,68,68,69,0,45};
	int len = ft_strlen(sResult);
	for(int i = 0; i < len; i++)
		printf("%c", sResult[i]); 
	printf("\n");
	ft_memmove(sResult + 1,sResult , 2);
	for(int i = 0; i < len; i++)
		printf("%c", sResult[i]); 
	printf("\n");
	for(int i = 0; i < len; i++)
		printf("%c", sResult2[i]); 

	printf("\n");
}
*/
