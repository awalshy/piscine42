/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dygouasd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 12:01:00 by dygouasd          #+#    #+#             */
/*   Updated: 2017/07/26 22:45:01 by dygouasd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# define BUFF_SIZE 2048

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

typedef struct		s_square
{
	int		x;
	int		y;
	int		taille;
	int		xmax;
	int		ymax;
	int		taille_max;
}					t_list;

typedef struct		s_square2
{
	char	obstacle;
	char	vide;
	char	plein;
	int		lign_tab;
}					t_info;

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*ft_strdup(char *src);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_chaine(char *buf, int ret, char *last);
char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);
int		ft_atoi(char *str);
int		map_long(char **tab, t_info *d);
t_info	*ft_info(char **tab);
int		map_lign(char **tab, t_info *j);
int		check_all_map(char **tab, t_info *d);
int		ft_check_end_line(char **tab);
t_list	*ft_run(char **tab, t_list *t, t_info *l);
t_list	*ft_initialize(char **tab, t_info *k);
void	ft_affichage(char **tab, t_list *t, t_info *l);

#endif
