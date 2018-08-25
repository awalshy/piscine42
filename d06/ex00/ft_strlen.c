/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 10:17:08 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/09 15:53:25 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		nbchar;
	char	active;

	nbchar = 0;
	active = '0';
	while (active != '\0')
	{
		active = str[nbchar];
		nbchar++;
	}
	nbchar--;
	return (nbchar);
}
