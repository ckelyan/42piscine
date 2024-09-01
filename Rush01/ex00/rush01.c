/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcsajka <kcsajka@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:51:17 by kcsajka           #+#    #+#             */
/*   Updated: 2024/09/01 14:11:33 by kcsajka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h> // temp

void	fputchar(char c);
void	putstr(char *s);
int		dtoi(char c);
char	itod(int i);
void	putd(int d);
void	display_grid(int **grid, unsigned int size, int *labels);
int		*get_axis_values(int *dest, int **values, int clue_index, size_t size);
int		count_visible_boxes(int **v, int ci, size_t s);
int		validate_axis(int *av, size_t s);
int		assert_and_log(int cond, char *msg);

struct	s_candidate;
int		match_candidates(struct s_candidate cf1, struct s_candidate cf2);

int	*parse_input(int *dest, char *s, unsigned int size)
{
	unsigned int	i;
	unsigned int	ai;
	int				value;

	i = -1;
	while (++i < size)
	{
		ai = i * 2;
		value = dtoi(s[ai]);
		if (value == -1 || (s[ai +1] && s[ai + 1] != ' '))
		{
			putstr("Parsing error: check input (near ");
			fputchar(s[ai]);
			putstr(")\n");
			return (0);
		}
		dest[i] = value;
	}
	return (dest);
}

int	main(int argc, char *argv[])
{
	int		visual_mode = 0; // temp
	int	*clues;
	int	**values;
	int	i;

	if (assert_and_log(argc != 2, "Expected at least 1 argument"))
		return (1);
	if (argc == 3)
		visual_mode = !strcmp(argv[2], "visual");

	clues = (int *)malloc(16 * 4); // int is 4 bytes
	parse_input(clues, argv[1], 16);

	values = (int **)malloc(4 * 8); // row times pointer size
	while (++i < 4)
		values[i] = (int *)malloc(4 * 4); // col times int size




	// testing area ---------------
	i = -1;
	while (++i < 4)
		values[1][i] = (i + 1) % 4 + 1;
	i = -1;
	while (++i < 4)
		values[2][i] = (i + 3) % 4 + 1;
	//int test2 = validate_axis(values[1], 4);
	//putd(test2);
	fputchar('\n');
	display_grid(values, 4, clues);

	return (0);
}

