/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:49:24 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/09/05 11:00:11 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	s;
	int	i;

	s = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	s = max - min;
	*range = (int *) malloc(sizeof(int) * s);
	if (!(*range))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (s);
}
