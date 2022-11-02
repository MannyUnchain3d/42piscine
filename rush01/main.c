/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manny <etetopat@student.42bangkok.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 16:41:00 by csantivi          #+#    #+#             */
/*   Updated: 2022/11/02 22:49:59 by Manny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		is_not_work(int argc, char **argv, int input[16]);

int		calculate(int tab[4][4], int input[16], int pos);

void	display(int tab[4][4])
{
	int		col;
	int		row;
	char	i;

	col = 0;
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			i = tab[row][col] + '0';
			write(1, &i, 1);
			if (col < 3)
				write(1, " ", 1);
			else if (row < 4)
				write(1, "\n", 1);
			col++;
		}
		row++;
	}
}

int	main(int argc, char **argv)
{
	int	*input;
	int	tab[4][4];
	int	i;

	input = malloc(16 * sizeof(int));
	if (is_not_work (argc, argv, input) == 1)
		return (0);
	i = 0;
	while (i < 4)
	{
		argc = 0;
		while (argc < 4)
		{
			tab[i][argc] = 0;
			argc++;
		}
		i++;
	}
	if (calculate(tab, input, 0) == 1)
		display(tab);
	else
		write(1, "Error\n", 6);
	return (0);
}
