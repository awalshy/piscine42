/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 22:46:04 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/22 02:04:19 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

char					*ft_strdup(char *src)
{
	int		a;
	int		b;
	char	*s;

	a = 0;
	b = 0;
	while (src[b] != '\0')
		b++;
	s = (char*)malloc(sizeof(*src) * (b + 1));
	while (src[a] != '\0')
	{
		s[a] = src[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}

struct	s_stock_par		*ft_param_to_tab(int ac, char **av)
{
	int			a;
	int			b;
	t_stock_par *src;

	a = 0;
	if (!(src = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
			b++;
		src[a].size_param = b;
		src[a].str = av[a];
		src[a].copy = ft_strdup(av[a]);
		src[a].tab = ft_split_whitespaces(src[a].copy);
		a++;
	}
	src[a].str = 0;
	return (&src[0]);
}
