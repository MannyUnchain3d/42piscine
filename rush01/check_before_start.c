/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_before_start.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manny <etetopat@student.42bangkok.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:25:24 by tkhotcha          #+#    #+#             */
/*   Updated: 2023/07/24 12:22:24 by Manny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_input(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0)
		{
			if (argv[1][i] < '1' || argv[1][i] > '4')
				return (0);
		}
		else
		{
			if (argv[1][i] != ' ')
				return (0);
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

int	*translate(char **argv, int input[16])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		input[j] = argv[1][i] - 48;
		i += 2;
		j++;
	}
	return (input);
}

int	check_before_start(int argc, char **argv, int input[16])
{
	if (argc != 2 || !check_input(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	input = translate(argv, input);
	return (0);
}
