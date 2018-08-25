/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 12:06:09 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/10 00:39:43 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int nbswap;
	int c;
	int a;

	nbswap = 1;
	while (nbswap > 0)
	{
		nbswap = 0;
		a = 0;
		while (a + 1 < size)
		{
			if (tab[a] > tab[a + 1])
			{
				c = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = c;
				nbswap++;
			}
			a++;
		}
	}
}
