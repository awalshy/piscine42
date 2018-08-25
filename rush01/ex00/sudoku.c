/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:14:40 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/16 23:39:56 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_tab(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (j < argc && argc == 10)
	{
		while (i < 9)
		{
			ft_putchar(argv[j][i]);
			if (i < 8)
				ft_putchar(' ');
			i++;
		}
		j++;
		i = 0;
		ft_putchar('\n');
	}
}

int		ft_checkblock(char **argv, int x, int y, int i)
{
	int		l;
	int		k;

	l = (((y - 1) / 3) * 3) + 1;
	k = (x / 3) * 3;
	while (((((y - 1) / 3) * 3) + 3) >= l)
	{
		while ((((x / 3) * 3) + 2) >= k)
		{
			if (argv[l][k] == i)
				return (0);
			k++;
		}
		l++;
		k = (x / 3) * 3;
	}
	return (1);
}

int		ft_check(char **argv, int x, int y, int i)
{
	int		save;
	int		save2;

	save2 = y;
	save = x;
	x = 0;
	y = 1;
	while (x < 9)
	{
		if (argv[save2][x] == i)
			return (0);
		x++;
	}
	while (y < 10)
	{
		if (argv[y][save] == i)
			return (0);
		y++;
	}
	return (ft_checkblock(argv, save, save2, i));
}

int		ft_resolve(int argc, char **argv, int x, int y)
{
	int		i;

	i = '1';
	if (argv[y][x] != '.' && argv[y][x] != '\0')
	{
		if (x == 8 && y == 9)
			ft_print_tab(argc, argv);
		else
			x < 8 ? ft_resolve(argc, argv, x + 1, y)
				: ft_resolve(argc, argv, 0, y + 1);
		return (0);
	}
	while (i < 58 && x < 9)
	{
		if (ft_check(argv, x, y, i) == 1)
		{
			argv[y][x] = i;
			x == 8 && y < 9 ? ft_resolve(argc, argv, 0, y + 1)
				: ft_resolve(argc, argv, x + 1, y);
		}
		i++;
	}
	if (x == 8 && y == 9)
		ft_print_tab(argc, argv);
	argv[y][x] = '.';
	return (0);
}
