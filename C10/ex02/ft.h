/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:51:44 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/11 17:02:31 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define MAX_BUFFER_SIZE 24576

void	ft_putchar(char c, int fh);
void	ft_putstr(char *str, int fh);
void	ft_file_error(char *fn);
void	ft_readtail(int fh, int bytes);
char	**argparse(int ac, char **av);

#endif
