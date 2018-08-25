/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dygouasd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 01:10:40 by dygouasd          #+#    #+#             */
/*   Updated: 2017/07/25 14:14:48 by dygouasd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "./../header/ft.h"

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (tab[j] != '\0')
	{
		ft_putstr(tab[j]);
		ft_putchar('\n');
		j++;
	}
}
