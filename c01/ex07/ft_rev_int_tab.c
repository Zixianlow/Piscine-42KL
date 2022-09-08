/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:19:02 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/08/24 15:57:48 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	store;

	i = 1;
	while (i <= size / 2)
	{
		store = tab[i - 1];
		tab[i - 1] = tab[size - i];
		tab[size - i] = store;
		i++;
	}
}
