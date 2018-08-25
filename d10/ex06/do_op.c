/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 01:33:51 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/27 17:13:35 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int		ft_atoi(char *str)
{
	int a;
	int nb;
	int neg;

	a = 0;
	nb = 0;
	neg = 0;
	while (str[a] == '\n' || str[a] == '\t' || str[a] == '\v' ||
			str[a] == '\f' || str[a] == ' ' || str[a] == '\r')
		a++;
	if (str[a] == '-')
	{
		neg = 1;
		a++;
	}
	if (str[a] == '-' || str[a] == '+')
		a++;
	while (str[a] <= '9' && str[a] >= '0')
	{
		nb = nb * 10 + str[a] - 48;
		a++;
	}
	return (neg == 1 ? nb * -1 : nb);
}

int		ft_check(int nbr1, int nbr2, char operand)
{
	if (nbr1 > 2147483647 || nbr1 < -2147483648)
		return (1);
	if (operand != '+' && operand != '-' && operand != '%' &&
			operand != '*' && operand != '/')
		return (1);
	if (nbr2 > 2147483647 || nbr2 < -2147483648)
		return (1);
	return (0);
}

int		ft_operation(int a, int b, char operand)
{
	if (operand == '+')
		return (a + b);
	else if (operand == '-')
		return (a - b);
	else if (operand == 42)
		return (a * b);
	else if (operand == 47)
		return (a / b);
	else if (operand == 37)
		return (a % b);
	return (0);
}

void	ft_putnbr(int nb)
{
	long int	i;

	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
	}
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + '0');
}
