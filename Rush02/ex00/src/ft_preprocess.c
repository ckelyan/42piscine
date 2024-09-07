/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preprocess.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:16:25 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/07 16:38:19 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <stdlib.h>

int	*ft_preprocess(char *s)
{
	int	*separated_ints;
	int	i;
	int	size;

	size = ft_strlen(s);
	separated_ints = (int *)malloc(sizeof(int) * size / 3);

	while (*s)
		
}
