/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:16:16 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/09/04 17:32:44 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int *a, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = a[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (a[0] != 10 - n)
		write(1, ", ", 2);
}

int	ft_asign(int *a, int *b, int j, int n)
{
	if (a[n - 1] == b[n - 1])
	{
		while (a[n - j] == b[n - j])
			j++;
		a[n - j]++;
		while (j > 1)
		{
			j--;
			a[n - j] = a[n - j - 1] + 1;
		}
	}
	else
		a[n - 1]++;
	return (a[0]);
}

void	ft_print_combn(int n)
{
	int	a[10];
	int	b[10];
	int	i;
	int	j;
	int	c;

	i = -1;
	j = 10;
	c = -1;
	while (++i < n)
		a[i] = i;
	while (++c < n)
		b[n - 1 - c] = --j;
	j = 1;
	while (a[0] != b[0])
	{
		ft_putchar(a, n);
		ft_asign(a, b, j, n);
	}
	ft_putchar(a, n);
}
