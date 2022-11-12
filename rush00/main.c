/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manny <etetopat@student.42bangkok.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 06:51:00 by strihan           #+#    #+#             */
/*   Updated: 2022/11/12 14:52:58 by Manny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

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
	return (0);
}
