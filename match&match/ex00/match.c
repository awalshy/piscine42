/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalsh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 22:26:45 by awalsh            #+#    #+#             */
/*   Updated: 2017/07/18 09:36:11 by awalsh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0')
	{
		while (s2[j] != '\0')
		{
			if (s2[j] != '*')
				return (0);
			j++;
		}
	}
	return (1);
}

int		match(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] == s2[j] || s2[j] == '*')
	{
		if (s1[i] == '\0' || s2[j] == '\0')
		{
			return (ft_check(s1, s2, i, j));
		}
		while (s2[j] == '*' && s2[j + 1] == '*')
			j++;
		if (s2[j] == '*' && s2[j + 1] == s1[i])
			j++;
		while (s2[j] == '*' && s1[i + 1] != s2[j + 1] && s1[i + 1] != '\0')
			i++;
		while (s1[i] == '*' && s1[i + 1] != s2[j + 1] && s2[j + 1] != '\0')
			j++;
		i++;
		j++;
	}
	return (0);
}

int main()
{
	printf("%d", match("bon1223", "b*23"));
	return (0);
}
