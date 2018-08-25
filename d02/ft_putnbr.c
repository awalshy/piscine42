/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 17:13:54 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/07 16:18:03 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

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

void	ft_putnbr2(int nb)
{
	long	int	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i >= 10)
		ft_putnbr2(i / 10);
	ft_putchar(i % 10 + '0');
}

int		main(void)
{
	ft_putnbr2(-2147483648);
	return (0);
}
