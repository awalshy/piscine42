/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 22:06:39 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/13 22:31:00 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_antidote(int i, int j, int k)
{
	if ((i < k) && (k < j))
		return (k);
	if ((j < k) && (k < i))
		return (k);
	if ((j < i) && (i < k))
		return (i);
	if ((k < i) && (i < j))
		return (i);
	if ((i < j) && (j < k))
		return (j);
	if ((k < j) && (j < i))
		return (j);
	return (0);
}
