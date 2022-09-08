/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:58:40 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/08/22 13:57:22 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n1, int n2)
{
	char	a;
	char	b;
	char	c;
	char	d;

	b = n1 % 10 + '0';
	d = n2 % 10 + '0';
	if (n1 < 10)
		a = '0';
	else
		a = n1 / 10 + '0';
	if (n2 < 10)
		c = '0';
	else
		c = n2 / 10 + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (n1 != 98 || n2 != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{	
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		ft_print (n1, n2);
		if (n2 == 99)
		{
			n1++;
			n2 = n1 + 1;
		}
		else
		{
			n2++;
		}
	}
}
