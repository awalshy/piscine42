/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 00:16:49 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/12 22:13:38 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int a;

	a = 0;
	while (str[a] <= 90 && str[a] >= 65 && str[a] != '\0')
		a++;
	if (str[a] == '\0')
		return (1);
	return (0);
}