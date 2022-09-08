/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:00:59 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/09/03 11:14:39 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int num1, int num2, int num3)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = num1 + '0';
	c2 = num2 + '0';
	c3 = num3 + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, &c3, 1);
	if (num1 != 7 || num2 != 8 || num3 != 9)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	num2 = 1;
	num3 = 2;
	while (num1 <= 7 && num3 > num2 && num2 > num1)
	{
		ft_print(num1, num2, num3);
		if (num3 < 9)
			num3++;
		else
		{
			if (num2 < 8)
				num2++;
			else
			{
				num1++;
				num2 = num1 + 1;
			}
			num3 = num2 + 1;
		}
	}
}
