/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:36:08 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/19 11:02:39 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_strupcase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= 90 && str[a] >= 65)
			a++;
		else if (str[a] <= 122 && str[a] >= 97)
		{
			str[a] = str[a] - 32;
			a++;
		}
		else
			a++;
	}
	return (str);
}