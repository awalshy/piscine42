/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:31:52 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/17 10:41:33 by awalsh           ###   ########.fr       */
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

	if (argc > 1)
	{
		j = argc - 1;
		while (j >= 1)
		{
			ft_putstr(argv[j]);
			ft_putchar('\n');
			j--;
		}
	}
	else
		return (0);
	return (0);
}
