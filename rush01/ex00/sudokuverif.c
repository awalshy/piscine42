/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokuverif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:15:07 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/16 23:52:22 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv);

int g_j = 0;

void	ft_putchar(char c);

int		ft_checkblock1(char **argv, int x, int y, int i)
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

int		ft_check1(char **argv, int x, int y, int i)
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
	return (ft_checkblock1(argv, save, save2, i));
}

int		ft_resolvetest(int argc, char **argv, int x, int y)
{
	int		i;
	int		save3;

	i = '1';
	if (argv[y][x] != '.' && argv[y][x] != '\0')
	{
		if (x == 8 && y == 9)
			g_j++;
		else
			x < 8 ? ft_resolvetest(argc, argv, x + 1, y)
				: ft_resolvetest(argc, argv, 0, y + 1);
		return (0);
	}
	while (i < 58 && x < 9)
	{
		if (ft_check1(argv, x, y, i) == 1)
		{
			argv[y][x] = i;
			x == 8 && y < 9 ? ft_resolvetest(argc, argv, 0, y + 1)
				: ft_resolvetest(argc, argv, x + 1, y);
		}
		i++;
	}
	if (x == 8 && y == 9)
		g_j++;
	argv[y][x] = '.';
	save3 = g_j;
	return (save3);
}
