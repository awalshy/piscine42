/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 15:36:00 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/27 17:13:15 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int		nbr1;
	int		nbr2;
	char	operand;

	if (argc == 4)
	{
		nbr1 = ft_atoi(argv[1]);
		nbr2 = ft_atoi(argv[3]);
		operand = argv[2][0];
		if (operand == '/' && nbr2 == 0)
			write(1, "Stop : division by zero\n", 24);
		else if (operand == '%' && nbr2 == 0)
			write(1, "Stop : modulo by zero\n", 22);
		else if (ft_check(nbr1, nbr2, operand) == 0)
		{
			ft_putnbr(ft_operation(nbr1, nbr2, operand));
			write(1, "\n", 1);
		}
		else if (ft_check(nbr1, nbr2, operand) == 1)
			write(1, "0\n", 2);
	}
	return (0);
}
