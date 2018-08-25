/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 10:36:42 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/26 21:43:48 by dygouasd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft.h"

int		check_all_map(char **tab, t_info *d)
{
	int		j;
	int		i;

	i = 0;
	j = 1;
	while (tab[j] != '\0')
	{
		while (tab[j][i] != '\0')
		{
			if (tab[j][i] != d->obstacle && tab[j][i] != d->vide &&
					tab[j][i] != d->plein && tab[j][i] !=
					'\n')
				return (0);
			i++;
		}
		j++;
		i = 0;
	}
	return (1);
}

int		map_lign(char **tab, t_info *j)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	if (i - 1 == j->lign_tab)
		return (check_all_map(tab, j));
	return (0);
}

int		map_long(char **tab, t_info *d)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (tab[i])
		i++;
	if (i < 2)
		return (0);
	while (j < ft_atoi(tab[0]) && ft_strlen(tab[j]) == ft_strlen(tab[j + 1]))
		j++;
	if (j == ft_atoi(tab[0]))
			return (map_lign(tab, d));
	return (0);
}
