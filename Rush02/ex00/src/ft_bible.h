/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bible.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 01:09:29 by jruiz             #+#    #+#             */
/*   Updated: 2024/09/08 20:22:09 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BIBLE_H
# define FT_BIBLE_H
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

// parsing
typedef struct s_value
{
	char	*lvalue;
	char	*rvalue;
	int		power;
}	t_value;
t_value	*ft_readdict(t_value *res, char *filename);
int		ft_count_lines(char *filename);
void	ft_free_dict(t_value *dict);

// memory
char	**malloc_all(char *str);
void	fill_tab(char **tab, char *str);
void	free_all_tab(char **tab);
void	free_all_tab_i(char **tab, int i);

// utils
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		ft_is_space(char c);
char	*ft_strdup(char *str, int size);
int		ft_verify(char *str);

// solver
void	write_all(t_value *dict, char *str);
void	write_number(t_value *dict, char *tab, int power);
t_value	*find_by_power(t_value *values, int pow);
t_value	*find_by_lvalue(t_value *values, char s[4]);
void	print_first_number(t_value *dict, char *tab);
void	print_second_number(t_value *dict, char *tab);
void	print_third_number(t_value *dict, char *tab);
#endif
