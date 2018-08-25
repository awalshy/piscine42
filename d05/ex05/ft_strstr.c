/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 12:25:54 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/11 19:21:11 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (to_find[b] == str[a + b] && to_find[b])
			b++;
		if (to_find[b] == '\0')
			return (&str[a]);
		a++;
	}
	return (0);
}
