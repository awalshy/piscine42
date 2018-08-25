/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 18:19:00 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/08 22:22:13 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int j;

	i = nb;
	j = 0;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
	{
		while (j < power - 1)
		{
			nb = nb * i;
			j++;
		}
		return (nb);
	}
}
