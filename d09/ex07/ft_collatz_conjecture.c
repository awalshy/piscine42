/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 00:24:44 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/14 10:32:42 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				*ft_collatz_recursive(int base, int i, int *a)
{
	if (base % 2 == 1)
		base = (base * 3) + 1;
	else
		base = base / 2;
	if (base == 1)
		*a = i;
	if (base > 1)
		ft_collatz_recursive(base, i + 1, a);
	return (a);
}

unsigned	int	ft_collatz_conjecture(unsigned int base)
{
	int		i;
	int		*a;
	int		var;
	int		*b;

	var = 0;
	a = &var;
	i = 1;
	if (base == 1)
		return (0);
	b = ft_collatz_recursive(base, i, a);
	return (*b);
}
