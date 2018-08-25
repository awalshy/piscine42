/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 17:13:54 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/07 14:51:55 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		ft_print(int m, int c, int d, int u)
{
	if (m != 0 || c != 0 || d != 0 || u != 0)
	{
		if (m != 0 || c != 0 || d != 0)
		{
			if (m != 0 || c != 0)
			{
				if (m != 0)
				{
					ft_putchar(m + 48);
				}
				ft_putchar(c + 48);
			}
			ft_putchar(d + 48);
		}
		ft_putchar(u + 48);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int m;
	int c;
	int d;
	int u;

	m = nb / 1000;
	c = (nb - (m * 1000)) / 100;
	d = (nb - (m * 1000) - (c * 100)) / 10;
	u = (nb - (m * 1000) - (c * 100) - (d * 10));
	ft_print(m, c, d, u);
}
