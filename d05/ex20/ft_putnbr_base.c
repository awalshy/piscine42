/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 03:01:16 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/16 03:01:40 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

int		check_base(char *base)
{
	int a;
	int b;

	a = 0;
	while (base[a] != '\0')
	{
		if (base[a] == '+' || base[a] == '-')
			return (0);
		b = 0;
		while (base[b] != '\0')
		{
			if (b == a)
				b++;
			if (base[a] == base[b])
			{
				return (0);
				b++;
			}
			else
				b++;
		}
		a++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;
	int a;
	int d;

	i = 0;
	if (nbr < 0)
		nbr = nbr * -1;
	a = ft_strlen(base);
	if (a == 1)
		return ;
	if (base[0] == '\0')
		return ;
	d = nbr / a;
	if (check_base(base) == 0)
		return ;
	ft_putchar(base[nbr % a]);
	while (d != 0)
	{
		ft_putchar(base[d % a]);
		d = d / a;
	}
}
