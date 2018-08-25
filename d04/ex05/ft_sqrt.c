/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 14:45:05 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/10 15:17:59 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (j < nb)
	{
		j = i * i;
		if (j == nb)
			return (i);
		if (j > nb)
			return (0);
		else
			i++;
	}
	return (0);
}