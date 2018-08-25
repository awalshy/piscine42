/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   theperhapslasterror.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:15:23 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/16 23:42:25 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		taille(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (argc > j)
	{
		while (i < ft_strlen(argv[j]))
		{
			i++;
		}
		if (i > 9 || i < 9)
			return (0);
		j++;
		i = 0;
	}
	return (1);
}
