/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dygouasd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 19:50:51 by dygouasd          #+#    #+#             */
/*   Updated: 2017/07/26 21:01:07 by dygouasd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft.h"

t_info		*ft_info(char **tab)
{
	t_info		*i;
	int			str_len;

	i = malloc(sizeof(t_info));
	str_len = ft_strlen(tab[0]);
	if (str_len < 4)
		return (0);
	i->plein = tab[0][str_len - 1];
	i->obstacle = tab[0][str_len - 2];
	i->vide = tab[0][str_len - 3];
	tab[0][str_len - 3] = '\0';
	i->lign_tab = ft_atoi(tab[0]);
	return (i);
}
