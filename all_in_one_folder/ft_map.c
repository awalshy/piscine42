/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 00:44:22 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/27 16:23:39 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int a;
	int *str;

	a = 0;
	if (!(str = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (a < length)
	{
		str[a] = (f(tab[a]));
		a++;
	}
	return (str);
}
