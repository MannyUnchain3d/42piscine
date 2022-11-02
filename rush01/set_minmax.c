/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_condition.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judomsil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:25:15 by judomsil          #+#    #+#             */
/*   Updated: 2022/01/23 20:30:53 by tkhotcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ref_pos(int pos)
{
	if (pos <= 3)
		return (pos);
	else if (pos <= 7)
		return (pos + 8);
	else if (pos <= 11)
		return ((pos - 8) * 4);
	else
		return (((pos - 11) * 4) - 1);
}

void	add_minmax_line(int minmax[2][16], int ref, int pos)
{
	int	i;

	i = 0;
	while (++i < 4)
	{
		if (pos <= 3)
		{
			minmax[0][ref + (i * 4)] = minmax[0][ref + ((i - 1) * 4)] + 1;
			minmax[1][ref + (i * 4)] = minmax[1][ref + ((i - 1) * 4)] + 1;
		}
		else if (pos <= 7)
		{
			minmax[0][ref - (i * 4)] = minmax[0][ref -((i - 1) * 4)] + 1;
			minmax[1][ref - (i * 4)] = minmax[1][ref -((i - 1) * 4)] + 1;
		}
		else if (pos <= 11)
		{
			minmax[0][ref + i] = minmax[0][ref + (i - 1)] + 1;
			minmax[1][ref + i] = minmax[1][ref + (i - 1)] + 1;
		}
		minmax[0][ref - i] = minmax[0][ref - (i - 1)] + 1;
		minmax[1][ref - i] = minmax[1][ref - (i - 1)] + 1;
	}
}

void	set_min(int input[16], int minmax[2][16], int pos)
{
	int	i;
	int	ref;

	ref = ref_pos(pos);
	if (input[pos] == 1)
	{
		minmax[0][ref] = 4;
		i = 0;
		while (i < 16)
		{
			if (i != pos && (i / 4 == pos / 4) && minmax[1][i] > 3)
				minmax[1][i] = 3;
			if (i != pos && (i % 4 == pos % 4) && minmax[1][i] > 3)
				minmax[1][i] = 3;
			i++;
		}
	}
}

void	set_max(int input[16], int minmax[2][16], int pos)
{
	int	ref;

	ref = ref_pos(pos);
	minmax[1][ref] = 5 - input[pos];
	if (input[pos] == 4)
	{
		minmax[0][ref] = 1;
		add_minmax_line(minmax, ref, pos);
	}
}

void	set_minmax(int input[16], int minmax[2][16])
{
	int	pos;

	pos = 0;
	while (pos < 16)
	{
		minmax[0][pos] = 1;
		minmax[1][pos] = 4;
		pos ++;
	}
	pos = 0;
	while (pos < 16)
	{
		set_min(input, minmax, pos);
		set_max(input, minmax, pos);
		pos ++;
	}
}
