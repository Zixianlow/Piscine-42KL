/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:39:04 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/09/05 10:54:15 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	s;
	int	*dest;
	int	i;

	s = 0;
	if (min >= max)
	{
		dest = NULL;
		return (dest);
	}
	s = max - min;
	dest = (int *) malloc(sizeof(int) * s);
	i = 0;
	if (dest == NULL)
		return (0);
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	return (dest);
}
