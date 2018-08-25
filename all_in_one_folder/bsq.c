/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 13:40:55 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/26 23:17:41 by dygouasd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft.h"

t_list		*ft_initialize(char **tab, t_info *k)
{
	int		j;
	int		i;
	t_list	*t;

	t = malloc(sizeof(char *) * 6);
	j = 1;
	while (tab[j])
	{
		while (tab[j][i])
		{
			i = 0;
			if (tab[j][i] == k->vide)
			{
				t->x = i;
				t->y = j;
				t->ymax = j;
				t->xmax = i;
				t->taille_max = 2;
				t->taille = 2;
			}
			i++;
		}
		j++;
	}
	return (t);
}

int		ft_check(t_list *t, char **tab, t_info *l)
{
	int		i;
	int		j;

	i = t->x;
	j = t->y;
	if ((t->x + t->taille < ft_strlen(tab[t->x]) &&
			t->y + t->taille < ft_strlen(tab[t->y])))
	{
		while (j < (t->y + t->taille))
		{
			if (tab[j][t->x] == l->obstacle)
				return (0);
			j++;
		}
		while (i < (t->x + t->taille - 1))
		{
			if (tab[t->y][i] == l->obstacle)
				return (0);
			i++;
		}
		return (1);
	}
	return (0);
}

t_list		*ft_biggest(t_list *t, t_info *l, char **tab)
{
	while (ft_check(t, tab, l) == 1)
	{
		t->taille++;
		if (t->taille > t->taille_max)
		{
			t->taille_max = t->taille - 1;
			t->ymax = t->y;
			t->xmax = t->x;
		}
	}
	t->taille = 2;
	return (t);
}

t_list		*ft_run(char **tab, t_list *t, t_info *l)
{
	while (t->y <= l->lign_tab && ((l->lign_tab - t->y) > t->taille_max))
	{
		while (t->x < ft_strlen(tab[1]))
		{
			if (t->x == l->vide)
				t = ft_biggest(t, l, tab);
			t->x++;
		}
		t->y++;
		t->x = 0;
	}
	return (t);
}

void		ft_affichage(char **tab, t_list *t, t_info *l)
{
	int		a;
	int		b;

	a = t->ymax;
	while (a < (t->ymax + t->taille_max))
	{
		b = t->xmax;
		while (b < (t->xmax + t->taille_max))
		{
			tab[a][b] = l->plein;
			b++;
		}
		a++;
	}
	ft_print_words_tables(tab);
}
