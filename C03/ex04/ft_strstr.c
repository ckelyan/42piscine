/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 17:56:26 by kcsajka           #+#    #+#             */
/*   Updated: 2024/08/29 13:51:17 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, char *needle)
{
	char		*candidate;
	char *const	needle_start = needle;

	if (!*needle)
		return (haystack);
	candidate = 0;
	while (*haystack)
	{
		candidate = haystack;
		needle = needle_start;
		if (*candidate == *needle_start)
			while (*candidate++ == *needle++)
				if (!*needle)
					return (haystack);
		candidate = 0;
		haystack++;
	}
	return (candidate);
}
