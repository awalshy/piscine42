/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 02:49:01 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/24 19:08:31 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		nbr_words(char *str)
{
	int	a;
	int c;
	int	nbr;

	a = 0;
	nbr = 0;
	while (str[a] != '\0')
	{
		while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t' ||
		str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
			a++;
		c = 0;
		while (str[a] >= 33 && str[a] <= 126)
		{
			if (c == 0)
				nbr++;
			a++;
			c++;
		}
	}
	return (nbr);
}

int		nbr_char(char *str, int aw)
{
	int	a;
	int c;
	int	nbr;

	a = 0;
	nbr = 0;
	while (str[a] != '\0')
	{
		while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t' ||
		str[a] == '\v' || str[a] == '\f' || str[a] == '\r')
			a++;
		c = 0;
		while (str[a] >= 33 && str[a] <= 126)
		{
			if (c == 0)
				nbr++;
			a++;
			c++;
		}
		if (nbr == (aw + 1))
			return (c);
	}
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	char	**src;
	int		a;
	int		b;
	int		c;

	a = 0;
	c = 0;
	src = (char**)malloc(sizeof(char*) * (nbr_words(str) + 1));
	while (a < (nbr_words(str)))
	{
		b = 0;
		src[a] = (char*)malloc(sizeof(char) * (nbr_char(str, a)));
		while (b < (nbr_char(str, a)))
		{
			while (str[c] == ' ' || str[c] == '\n' || str[c] == '\t')
				c++;
			src[a][b] = str[c];
			b++;
			c++;
		}
		src[a][b] = '\0';
		a++;
	}
	src[a] = 0;
	return (src);
}
