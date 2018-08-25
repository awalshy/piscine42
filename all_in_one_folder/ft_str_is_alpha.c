/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 20:24:52 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/20 11:17:54 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int a;

	a = 0;
	if (str[0] == '\0')
		return (1);
	while ((str[a] >= 65 && str[a] <= 90) || (str[a] >= 97 && str[a] <= 122))
		a++;
	if (str[a] == '\0')
		return (1);
	return (0);
}
