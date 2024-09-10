/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:51:44 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/10 12:05:03 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define MAX_BUFFER_SIZE 2048

void	ft_putchar(char c);
void	ft_error(char *str);
void	ft_readfile(int fh, char *buffer);

#endif
