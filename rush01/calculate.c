/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judomsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:34:58 by judomsil          #+#    #+#             */
/*   Updated: 2022/01/23 20:45:27 by tkhotcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_case(int tab[4][4], int pos, int input[16]);

int	scan(int tab[4][4], int pos, int num)
{
	int	i;
	int	col;
	int	row;

	col = pos % 4;
	row = pos / 4;
	i = 0;
	while (i < row)
	{
		if (tab[i][col] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < col)
	{
		if (tab[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	calculate(int tab[4][4], int input[16], int pos)
{
	int	num;
	int	row;
	int	col;

	row = pos / 4;
	col = pos % 4;
	if (pos == 16)
		return (1);
	num = 1;
	while (num <= 4)
	{
		if (scan(tab, pos, num) == 0)
		{
			tab[row][col] = num;
			if (check_case(tab, pos, input) == 0)
			{
				if (calculate(tab, input, pos + 1) == 1)
					return (1);
			}
			else
				tab[row][col] = 0;
		}
		num++;
	}
	return (0);
}
