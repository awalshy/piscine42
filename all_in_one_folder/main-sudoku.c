/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:14:05 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/16 23:51:24 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_j;
int		ft_resolvetest(int argc, char **argv, int x, int y);
int		ft_resolve(int argc, char **argv, int x, int y);
int		taille(int argc, char **argv);

int		ft_checkblock2(char **argv, int x, int y, char i)
{
	int		l;
	int		k;
	int		m;

	m = 0;
	l = (((y - 1) / 3) * 3) + 1;
	k = (x / 3) * 3;
	while (((((y - 1) / 3) * 3) + 3) >= l)
	{
		while ((((x / 3) * 3) + 2) >= k)
		{
			if (argv[l][k] == i)
			{
				m++;
				if (m > 1)
					return (0);
			}
			k++;
		}
		l++;
		k = (x / 3) * 3;
	}
	return (1);
}

int		ft_checkcolumn(char **argv, int save, int y, char i)
{
	int		k;
	int		save2;

	save2 = y;
	y = 1;
	k = 0;
	while (y < 9)
	{
		if (argv[y][save] == i)
		{
			k++;
			if (k > 1)
				return (0);
		}
		y++;
	}
	return (ft_checkblock2(argv, save, save2, i));
}

int		ft_checkl(char **argv, int x, int y, char i)
{
	int		save;
	int		j;

	save = x;
	x = 0;
	j = 0;
	while (x < 9)
	{
		if (argv[y][x] == i)
		{
			j++;
			if (j > 1)
				return (0);
		}
		x++;
	}
	return (ft_checkcolumn(argv, save, y, i));
}

int		erreur(int argc, char **argv)
{
	int a;
	int b;
	int i;

	b = 0;
	i = 0;
	a = 1;
	while (a < argc)
	{
		while (argv[a][b] != '\0')
		{
			if (argv[a][b] <= '9' && argv[a][b] > '0')
			{
				if (ft_checkl(argv, a, b, argv[a][b]) == 0)
					return (0);
				i++;
			}
			b++;
		}
		a++;
		b = 0;
	}
	return (i);
}

int		main(int argc, char **argv)
{
	int i;

	if (taille(argc, argv) == 1 && argc == 10)
	{
		i = erreur(argc, argv);
		ft_resolvetest(argc, argv, 0, 1);
		if (argc == 10 && i >= 17 && g_j == 1)
			ft_resolve(argc, argv, 0, 1);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
}
