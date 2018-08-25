/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 22:01:13 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/12 21:50:30 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int i;
	int a;
	int premier;

	premier = 1;
	i = 2;
	a = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (a <= nb)
	{
		if (nb % i == 0)
			premier = 0;
		i++;
		a = i * i;
	}
	if (premier == 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
