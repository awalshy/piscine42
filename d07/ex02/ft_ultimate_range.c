/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 16:49:41 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/20 23:24:05 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int a;
	int b;
	int size;

	b = 0;
	if (min >= max)
		return (0);
	size = max - min;
	if (!(range[0] = (int*)malloc(sizeof(int) * size)))
		return (0);
	a = min;
	while (a < max)
	{
		range[0][b] = a;
		a++;
		b++;
	}
	return (size);
}
