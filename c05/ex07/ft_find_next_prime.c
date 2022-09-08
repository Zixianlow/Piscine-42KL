/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzi-xian <lzi-xian@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 22:45:23 by lzi-xian          #+#    #+#             */
/*   Updated: 2022/08/31 11:36:11 by lzi-xian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	if (nb == 2147483647)
		return (2147483647);
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			nb = ft_find_next_prime(nb + 1);
			break ;
		}
		i++;
	}
	return (nb);
}
