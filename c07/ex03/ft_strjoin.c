/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:57:01 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/09/06 10:30:21 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_joinlen(int size, char **strs, char *sep)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (i < size)
	{
		l = l + ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (l);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*dest;
	int		l;

	if (size <= 0)
		return ((char *) malloc(1));
	l = ft_joinlen(size, strs, sep) - ft_strlen(sep);
	dest = (char *) malloc ((l + 1) * sizeof(char));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		dest = ft_strcpy(strs[i], dest);
		if (i < size - 1)
			dest = ft_strcpy(sep, dest);
		i++;
	}
	*dest = '\0';
	return (dest - l);
}
