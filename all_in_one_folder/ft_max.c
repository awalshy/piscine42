/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 09:43:59 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/14 09:58:43 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_max(int *tab, int lenght)
{
	int a;
	int max;
	int b;

	a = 0;
	max = 0;
	while (a < lenght)
	{
		b = 0;
		b = tab[a];
		if (b > max)
			max = b;
		a++;
	}
	return (max);
}
