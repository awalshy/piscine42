/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 04:59:28 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/07 00:27:40 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		ft_print(char a, char b, char c)
{
	char v;
	char e;

	v = ',';
	e = ' ';
	if (a == '7' && b == '8' && c == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(v);
		ft_putchar(e);
	}
	return (0);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
