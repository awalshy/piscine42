/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 14:14:33 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/09 14:21:43 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_printotherlines(int x, int y)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (j < (y - 2))
	{
		ft_putchar('B');
		while (k < (x - 2))
		{
			ft_putchar(' ');
			k++;
		}
		k = 0;
		if (x > 1)
			ft_putchar('B');
		ft_putchar('\n');
		j++;
	}
}

void	ft_printlastline(int x)
{
	int l;

	l = 0;
	ft_putchar('C');
	if (x > 2)
	{
		while (l < (x - 2))
		{
			ft_putchar('B');
			l++;
		}
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int i;

	i = 0;
	if (x == 0 || y == 0)
		return (0);
	else
	{
		ft_putchar('A');
		if (x > 2)
		{
			while (i < (x - 2))
			{
				ft_putchar('B');
				i++;
			}
		}
		if (x > 1)
			ft_putchar('A');
		ft_putchar('\n');
		if (y > 2)
			ft_printotherlines(x, y);
		if (y > 1)
			ft_printlastline(x);
		return (0);
	}
}
