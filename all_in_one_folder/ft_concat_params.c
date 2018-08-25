/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 18:15:35 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/21 12:30:21 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_malloc(int argc, char **argv)
{
	int i;
	int j;
	int a;
	int c;

	c = 0;
	i = 0;
	j = 0;
	a = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			a++;
			j++;
		}
		c++;
		i++;
	}
	return ((a + c));
}

char	*ft_concat_params(int argc, char **argv)
{
	int		a;
	int		j;
	int		i;
	char	*str;

	a = 0;
	i = 1;
	if (!(str = (char *)malloc(sizeof(char) * (ft_malloc(argc, argv) + 1))))
		return (0);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[a] = argv[i][j];
			a++;
			j++;
		}
		i++;
		str[a] = '\n';
		a++;
	}
	str[a - 1] = '\0';
	return (str);
}
