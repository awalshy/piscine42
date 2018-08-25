/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 19:10:05 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/22 19:13:12 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	long	int	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}

void	ft_print(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int a;

	a = 0;
	while (tab[a] != 0)
	{
		ft_print(tab[a]);
		a++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int b;
	int a;

	a = 0;
	while (par[a].str != 0)
	{
		b = 0;
		while (par[a].copy[b] != 0)
		{
			ft_putchar(par[a].copy[b]);
			b++;
		}
		ft_putchar('\n');
		ft_putnbr(par[a].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[a].tab);
		a++;
	}
}
