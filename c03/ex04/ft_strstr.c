/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 11:45:42 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/08/24 11:02:47 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	q;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			q = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					q++;
				i++;
			}
			if (q == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
