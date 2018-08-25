/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 18:03:13 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/17 22:36:31 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int argc, char *argv[])
{
	int a;
	int b;

	a = 0;
	while (++a < argc)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			ft_putchar(argv[a][b]);
			b++;
		}
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' || s2[a] != '\0')
	{
		if (s1[a] == s2[a])
			a++;
		else
			return (s1[a] - s2[a]);
	}
	return (0);
}

int		ft_sort(int argc, char *argv[])
{
	int		a;
	int		swap;
	char	*tmp;

	swap = 1;
	while (swap != 0)
	{
		swap = 0;
		a = argc;
		while (--a > 1)
		{
			if ((ft_strcmp(argv[a], argv[a - 1]) < 0))
			{
				tmp = argv[a];
				argv[a] = argv[a - 1];
				argv[a - 1] = tmp;
				swap++;
			}
		}
	}
	ft_print(argc, argv);
	return (0);
}

int		main(int argc, char *argv[])
{
	int a;

	a = 0;
	if (argc > 1)
	{
		ft_sort(argc, argv);
	}
	else
		return (0);
	return (0);
}
