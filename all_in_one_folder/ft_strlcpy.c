/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 15:17:17 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/20 11:13:28 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				a;
	unsigned int	b;

	b = 0;
	a = 0;
	while (b < size && dest[b] != '\0')
		b++;
	while (src[a] != '\0')
		a++;
	return (a);
}
