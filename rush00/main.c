/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manny <etetopat@student.42bangkok.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 06:51:00 by strihan           #+#    #+#             */
/*   Updated: 2022/11/13 15:27:20 by Manny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc == 3)
	{
		x = *argv[1] - '0';
		y = *argv[2] - '0';
		rush(x, y);
	}
	else
	{
		write(1, "Error: Invalid number of arguments\n", 35);
	}
	return (0);
}
