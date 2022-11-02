/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_case.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:52:07 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/23 20:45:42 by tkhotcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_left(int tab[4][4], int pos, int input[16])
{
	int	i;
	int	max_size;
	int	count_tower;

	i = 0;
	max_size = 0;
	count_tower = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				count_tower++;
			}
			i++;
		}
		if (input[8 + pos / 4] != count_tower)
			return (1);
	}
	return (0);
}

int	check_row_right(int tab[4][4], int pos, int input[16])
{
	int	i;
	int	max_size;
	int	count_tower;

	i = 4;
	max_size = 0;
	count_tower = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (tab[pos / 4][i] > max_size)
			{
				max_size = tab[pos / 4][i];
				count_tower++;
			}
		}
		if (input[12 + pos / 4] != count_tower)
			return (1);
	}
	return (0);
}

int	check_col_up(int tab[4][4], int pos, int input[16])
{
	int	i;
	int	max_size;
	int	count_tower;

	i = 0;
	max_size = 0;
	count_tower = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (tab[i][pos % 4] > max_size)
			{
				max_size = tab[i][pos % 4];
				count_tower++;
			}
			i++;
		}
		if (input[pos % 4] != count_tower)
			return (1);
	}
	return (0);
}

int	check_col_down(int tab[4][4], int pos, int input[16])
{
	int	i;
	int	max_size;
	int	count_tower;

	i = 3;
	max_size = 0;
	count_tower = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (tab[i][pos % 4] > max_size)
			{
				max_size = tab[i][pos % 4];
				count_tower++;
			}
			i--;
		}
		if (input[4 + pos % 4] != count_tower)
			return (1);
	}
	return (0);
}

int	check_case(int tab[4][4], int pos, int input[16])
{
	if (check_row_left(tab, pos, input) == 1)
		return (1);
	if (check_row_right(tab, pos, input) == 1)
		return (1);
	if (check_col_up(tab, pos, input) == 1)
		return (1);
	if (check_col_down(tab, pos, input) == 1)
		return (1);
	return (0);
}
