/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 09:39:59 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/09/08 09:34:26 by lzi-xian         ###   ########.fr       */
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

int	ft_chksep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	ft_strcount(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (ft_chksep(str[i + 1], charset) == 0
			&& ft_chksep(str[i], charset) == 1)
			c++;
		i++;
	}
	return (c);
}

int	ft_sublen(char *str, char *charset)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_chksep(str[i], charset) == 0)
		{
			i++;
			c++;
		}
		while (str[i] != '\0' && ft_chksep(str[i], charset) == 1)
			i++;
	}
	return (c);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	k = 0;
	dest = (char **) malloc(sizeof(char *) * (ft_strcount(str, charset) + 2));
	if (dest == NULL)
		return (0);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		dest[k] = (char *) malloc(sizeof(char) * (ft_sublen(str, charset)) + 1);
		while (str[i] != '\0' && ft_chksep(str[i], charset) == 1)
			i++;
		while (str[i] != '\0' && ft_chksep(str[i], charset) == 0)
			dest[k][j++] = str[i++];
		dest[k][j] = '\0';
		if (j == 0)
			dest[k] = 0;
		k++;
	}
	dest[k] = 0;
	return (dest);
}
