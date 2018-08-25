/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dygouasd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 11:50:43 by dygouasd          #+#    #+#             */
/*   Updated: 2017/07/26 23:14:53 by dygouasd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft.h"

char	*ft_chaine(char *buf, int ret, char *last)
{
	char	*tab;
	char	*tmp;

	tmp = buf;
	tab = last;
	last = malloc(sizeof(char) * ft_strlen(tab) + ret);
	last = tab;
	last = ft_strcat(last, tmp);
	return (last);
}

char	**ft_lire(int fd)
{
	char	*last;
	char	**tab;
	char	*buf;
	int		ret;

	last = NULL;
	buf = malloc(sizeof(char) * BUFF_SIZE);
	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		if (!last)
		{
			last = ft_strdup(buf);
		}
		else
			last = ft_chaine(buf, ret, last);
	}
	tab = ft_split_whitespaces(last);
	return (tab);
}

int		main(int argc, char **argv)
{
	int		i;
	int		retour;
	char	**tab;
	
	i = 1;
	if (i < argc)
	{
		retour = open(argv[i], O_RDONLY);
		tab = ft_lire(retour);
		if (map_long(tab, ft_info(tab)) == 0)
		{
			ft_putstr("map error\n");
			return (0);
		}
		ft_affichage(tab, ft_run(tab, (ft_initialize(tab, ft_info(tab))), ft_info(tab)), ft_info(tab));
		i++;
	}
}
