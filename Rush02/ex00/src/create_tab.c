/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepopadi <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:01:58 by fepopadi          #+#    #+#             */
/*   Updated: 2024/09/08 20:56:33 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_bible.h"

char	**malloc_all(char *str)
{
	int		taille;
	int		counter;
	int		i;
	char	**tab;

	taille = ft_strlen(str);
	counter = 0;
	i = 0;
	while (taille >= 0)
	{
		taille = taille - 3;
		counter++;
	}
	tab = malloc(sizeof(char *) * (counter + 1));
	if (tab == NULL)
		return (NULL);
	while (i != counter)
	{
		tab[i] = malloc(sizeof(char) * 4);
		if (tab[i] == NULL)
			free_all_tab_i(tab, i);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int	fill_zero(char **tab, int count)
{
	int	c;

	c = 0;
	while (count < 3)
	{
		tab[0][c++] = '0';
		count++;
	}
	return (c);
}

void	fill_tab(char **tab, char *str)
{
	int	i;
	int	d;
	int	c;
	int	taille;
	int	count;

	i = 0;
	d = 0;
	c = 0;
	taille = ft_strlen(str);
	count = taille % 3;
	if (count != 0)
		c = fill_zero(tab, count);
	while (str[i] != '\0')
	{
		if (c == 3)
		{
			tab[d++][c] = '\0';
			c = 0;
		}
		tab[d][c++] = str[i++];
	}
	if (c > 0)
		tab[d++][c] = '\0';
	tab[d] = NULL;
}
