/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 11:02:29 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/27 17:40:21 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		ft_strlen(char **str)
{
	int a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

void	ft_sort_wordtab(char **tab)
{
	int		a;
	int		swap;
	char	*tmp;

	a = 0;
	swap = 1;
	while (swap != 0)
	{
		swap = 0;
		while (tab[a])
		{
			if (tab[a + 1] != 0 && ft_strcmp(tab[a], tab[a + 1]) > 0)
			{
				tmp = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = tmp;
				swap++;
			}
			a++;
		}
		a = 0;
	}
}
