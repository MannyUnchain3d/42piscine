/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_before_start.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhotcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 17:25:24 by tkhotcha          #+#    #+#             */
/*   Updated: 2022/01/23 20:45:21 by tkhotcha         ###   ########.fr       */
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

int	is_not_work(int argc, char **argv, int input[16])
{
	if (argc != 2 || !check_input(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	input = translate(argv, input);
	return (0);
}
