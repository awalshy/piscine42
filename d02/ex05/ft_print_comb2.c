/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 08:52:53 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/07 13:53:04 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		ft_print(char a, char b, char c, char d)
{
	if (a < c || (a == c && b < d))
	{
		if (a == '9' && b == '8' && c == '9' && d == '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(c);
			ft_putchar(d);
		}
		else
		{
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(' ');
			ft_putchar(c);
			ft_putchar(d);
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	return (0);
}

int		count_var(char a, char b, char c, char d)
{
	while (a <= '9')
	{
		d++;
		if (d == 58)
			c++;
		if (d == 58)
			d = '0';
		if (c == 58)
			b++;
		if (c == 58)
			c = '0';
		if (b == 58)
			a++;
		if (b == 58)
			b = '0';
		ft_print(a, b, c, d);
	}
	return (0);
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	count_var(a, b, c, d);
}
