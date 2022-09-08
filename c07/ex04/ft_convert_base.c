/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 16:34:11 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/09/06 10:31:01 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_result(int n, char *base_to);

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	c;

	c = 1;
	if ((ft_strlen(base) == 0) || (ft_strlen(base) == 1))
		return (0);
	while (*base != '\0')
	{
		i = 1;
		while (base[i] != '\0')
		{
			if (*base == base[i])
				return (0);
			i++;
		}
		if (*base == '+' || *base == '-')
			return (0);
		else if ((*base >= 9 && *base <= 13) || *base == ' ')
			return (0);
		base++;
	}
	return (1);
}

int	ft_rmblank(char *str, int i)
{
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	ft_chkinbase(char c, char *base_from)
{
	int	i;

	i = 0;
	while (base_from[i] != '\0')
	{
		if (c == base_from[i])
			return (i);
		i++;
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i;
	int		s;
	int		r;
	char	*result;

	i = 0;
	s = 1;
	r = 0;
	if (ft_check_base(base_from) == 0 || ft_check_base(base_to) == 0)
		return (0);
	i = ft_rmblank(nbr, i);
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i++] == '-')
			s = s * -1;
	}
	while (nbr[i] != '\0')
	{
		if ((ft_chkinbase(nbr[i], base_from) >= 0))
			r = r * ft_strlen(base_from) + ft_chkinbase(nbr[i++], base_from);
		else
			break ;
	}
	result = ft_result(r * s, base_to);
	return (result);
}
