/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dygouasd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 01:39:13 by dygouasd          #+#    #+#             */
/*   Updated: 2017/07/14 10:57:32 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i] == s2[i])
		return (0);
	if (s1[i] > s2[i] || s1[i] < s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

int		ft_alert(int argc, char **argv, char *str)
{
	int		j;
	int		i;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = ft_strcmp(argv[j], str);
			if (i == 0)
				return (1);
			j++;
		}
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		i[3];
	char	*str;
	char	*str2;
	char	*str3;

	str2 = "attack";
	str3 = "Powers";
	str = "president";
	if (argc > 1)
	{
		i[0] = ft_alert(argc, argv, str);
		i[1] = ft_alert(argc, argv, str2);
		i[2] = ft_alert(argc, argv, str3);
		if (i[0] == 1 || i[1] == 1 || i[2] == 1)
		{
			write(1, "Alert!!!\n", 9);
		}
	}
}
