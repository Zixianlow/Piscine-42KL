/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:23:04 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/08/25 21:05:12 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	j = 0;
	if (size > ft_strlen(dest))
		r = ft_strlen(src) + ft_strlen(dest);
	else
		r = ft_strlen(src) + size;
	i = ft_strlen(dest);
	while (src[j] != '\0' && j < size - i - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (r);
}
