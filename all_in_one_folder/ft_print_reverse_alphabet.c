/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:58:09 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/07 00:23:25 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char a;

	a = 'z';
	while (a >= 'a')
	{
		ft_putchar(a);
		a--;
	}
}
