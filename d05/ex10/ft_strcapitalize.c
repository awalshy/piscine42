/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 20:03:00 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/20 11:17:39 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char		*ft_putlowcase(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
		{
			str[a] = str[a] + 32;
			a++;
		}
		else if (str[a] >= 97 && str[a] <= 122)
			a++;
		else
			a++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	int a;
	int c;

	a = 0;
	ft_putlowcase(str);
	while (str[a] != '\0')
	{
		c = 0;
		if (str[a - 1] <= 57 && str[a - 1] >= 48)
			c = 1;
		while ((str[a] >= 65 && str[a] <= 90) ||
				(str[a] >= 97 && str[a] <= 122))
		{
			if (str[a] >= 97 && str[a] <= 122 && c == 0)
				str[a] = str[a] - 32;
			a++;
			c++;
		}
		a++;
	}
	return (str);
}
