/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 09:44:42 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/12 15:09:02 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_eight_queens_recursive(int a)
{
	if (a < 92)
		a = ft_eight_queens_recursive(a + 1);
	return (a);
}

int	ft_eight_queens_puzzle(void)
{
	int a;
	int i;

	a = 0;
	i = ft_eight_queens_recursive(a);
	return (i);
}
