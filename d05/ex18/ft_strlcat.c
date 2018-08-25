/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 11:15:22 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/19 22:05:40 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int a;
	int b;

	b = 0;
	a = 0;
	while (dest[b] != '\0')
		b++;
	while (src[a] != '\0')
		a++;
	return (size + a);
}
