/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 16:49:32 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/21 15:57:38 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int a;

	a = 0;
	while (tab[a] != 0)
	{
		ft_print(tab[a]);
		a++;
	}
}
