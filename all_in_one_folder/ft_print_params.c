/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 10:19:20 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/17 10:19:48 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

int		main(int argc, char *argv[])
{
	int j;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			ft_putstr(argv[j]);
			ft_putchar('\n');
			j++;
		}
	}
	else
		return (0);
	return (0);
}
