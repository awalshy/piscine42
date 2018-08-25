/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dygouasd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 01:34:02 by dygouasd          #+#    #+#             */
/*   Updated: 2017/07/25 14:08:57 by dygouasd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../header/ft.h"

int		ft_count(char *str)
{
	int		i;
	int		levier;
	int		mot;

	i = 0;
	mot = 0;
	levier = 1;
	while (str[i] != '\0')
	{
		levier = 1;
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
		while (str[i] != '\t' && str[i] != '\n' && str[i] != ' '
				&& str[i] != '\0')
		{
			if (levier == 1)
			{
				mot++;
				levier = 0;
			}
			i++;
		}
	}
	return (mot);
}

char	**ft_remplissage(char *str, char **tab, int g)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (j < g)
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
		while (str[i] != '\t' && str[i] != '\n' && str[i] != ' '
				&& str[i] != '\0')
		{
			tab[j][k] = str[i];
			i++;
			k++;
		}
		tab[j][k] = '\0';
		j++;
		k = 0;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_count(str) + 1))))
		return (0);
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
		while (str[i] != '\t' && str[i] != '\n' && str[i] != ' '
				&& str[i] != '\0')
		{
			k++;
			i++;
		}
		if (!(tab[j] = malloc(sizeof(char) * k + 1)))
			return (0);
		j++;
	}
	return (ft_remplissage(str, tab, (ft_count(str))));
}
