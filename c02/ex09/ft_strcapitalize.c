/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 19:29:02 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/08/24 19:18:07 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isnot_ann(char *str, int i)
{
	if (!(str[i] >= 'a' && str[i] <= 'z'))
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				return (1);
		}
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	c = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && c == 1)
			str[i] = str[i] - 32;
		c = ft_isnot_ann(str, i);
		i++;
	}
	return (str);
}
