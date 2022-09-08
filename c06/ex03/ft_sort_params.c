/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 11:14:26 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/08/31 14:48:53 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*key;

	i = 2;
	while (i < ac)
	{
		key = av[i];
		j = i - 1;
		while (j > 0 && (ft_strcmp(av[j], key) > 0))
		{
			ft_swap(&av[j + 1], &av[j]);
			j = j - 1;
		}
		ft_swap(&av[j + 1], &key);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 2)
		ft_sort(ac, av);
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
