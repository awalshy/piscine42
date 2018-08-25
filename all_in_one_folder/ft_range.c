/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:52:23 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/20 22:44:54 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int range;
	int *str;
	int a;
	int i;

	a = 0;
	if (min >= max)
		return (NULL);
	range = max - min;
	str = (int*)malloc(sizeof(int) * range);
	i = min;
	while (i < max)
	{
		str[a] = i;
		a++;
		i++;
	}
	return (str);
}
