/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dygouasd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 18:06:19 by dygouasd          #+#    #+#             */
/*   Updated: 2017/07/25 18:06:29 by dygouasd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft.h"

int		ft_atoi(char *str)
{
	int		i;
	int		atoi;
	int		j;

	i = 0;
	j = 1;
	atoi = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10;
		atoi = atoi + (str[i] - 48);
		i++;
	}
	return (atoi * j);
}
