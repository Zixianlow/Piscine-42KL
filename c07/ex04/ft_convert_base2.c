/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:59:50 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/09/06 10:31:27 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *base);

int	ft_reslen(int nb, int l)
{
	int		c;
	long	n;

	c = 0;
	n = nb;
	if (n < 0)
	{
		n = -n;
		c++;
	}
	while (n > 0)
	{
		n = n / l;
		c++;
	}
	return (c);
}

char	*ft_handling(char *dest, long i, char *base_to)
{
	if (i > 0)
		dest[0] = '-';
	else if (i == 0)
		dest[0] = base_to[0];
	return (dest);
}

long	ft_special(long i)
{
	if (i == -2147483648)
		return (2147483648);
	else
		return (-i);
}

char	*ft_result(int n, char *base_to)
{
	long	i;
	int		l;
	int		w;
	int		c;
	char	*dest;

	l = ft_strlen(base_to);
	w = ft_reslen(n, l);
	dest = (char *) malloc ((w + 1) * sizeof(char));
	dest[w] = '\0';
	i = n;
	c = 0;
	if (i <= 0 || i == -2147483648)
	{
		i = ft_special(i);
		dest[0] = '-';
		dest = ft_handling(dest, i, base_to);
	}
	while (i > 0 && c++ < 100)
	{
		dest[w - c] = base_to[i % l];
		i = i / l;
	}
	return (dest);
}
