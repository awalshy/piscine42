/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/27 16:40:42 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/27 17:39:28 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int a;
	int i;

	i = 0;
	a = 0;
	while (a < (length - 1))
	{
		if (f(tab[a], tab[a + 1]) < 0)
		{
			if (i == 2)
				return (0);
			i = 1;
		}
		if (f(tab[a], tab[a + 1]) > 0)
		{
			if (i == 1)
				return (0);
			i = 2;
		}
		a++;
	}
	return (1);
}
