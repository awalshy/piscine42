/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:48:24 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/14 15:39:48 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_unmatch(int *tab, int length)
{
	int a;
	int b;
	int nbr;

	a = 0;
	b = 0;
	nbr = 0;
	while (a < length)
	{
		while (b < length)
		{
			if (tab[a] == tab[b])
				nbr++;
			b++;
		}
		if (nbr == 0)
			nbr = 0;
		if ((nbr % 2) == 1)
			return (tab[a]);
		a++;
		b = 0;
	}
	return (0);
}
