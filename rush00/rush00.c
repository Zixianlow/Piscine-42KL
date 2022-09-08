/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketan <ketan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:49:22 by ketan             #+#    #+#             */
/*   Updated: 2022/08/21 16:48:38 by ketan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	col;
	int	row;

	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			if ((row == 0 || row == y - 1) && (col == 0 || col == x - 1))
				ft_putchar('o');
			else if ((row == 0 || row == y - 1) && (col > 0 || col < x - 1))
				ft_putchar('-');
			else if ((col == 0 || col == x - 1) && (row > 0 || row < y - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		row++;
		if (x > 0)
			ft_putchar('\n');
	}
}
