/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgiochal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 14:42:26 by sgiochal          #+#    #+#             */
/*   Updated: 2023/09/08 00:46:30 by sgiochal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char			a;

	if (n < 0)
	{
		write (fd, "-", 1);
		if (n == -2147483648)
		{
			write (fd, "2", 1);
			ft_putnbr_fd(147483648, fd);
			return ;
		}
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	a = '0' + n % 10;
	write (fd, &a, 1);
}
/*
int	main(void)
{
	int a = -2147483648;
	int c = 64450;
	int d = -34857;
	int e = 0;
	ft_putnbr_fd(a,1);
	write(1,"\n",1);
	ft_putnbr_fd(c,1);
	write(1,"\n",1);
	ft_putnbr_fd(d,1);
	write(1,"\n",1);
	ft_putnbr_fd(e,1);
	write(1,"\n",1);
}
*/
