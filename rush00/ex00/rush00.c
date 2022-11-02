/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strihan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 05:44:55 by strihan           #+#    #+#             */
/*   Updated: 2022/01/16 22:47:22 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c);

void	ft_putstar(int x)
{
	int	i;

	i = 0;
	while (i < (x - 2))
	{
		ft_putchar('-');
		i++;
	}
}

void	ft_putmiddlestar(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < (y - 2))
	{
		ft_putchar('\n');
		ft_putchar('|');
		if (x > 1)
		{
			while (i < (x -2))
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('|');
		}
		j++;
		i = 0;
	}
}

void	rush(int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		ft_putchar('o');
		if (x > 1)
		{
			ft_putstar(x);
			ft_putchar('o');
		}
		if (y > 1)
		{
			ft_putmiddlestar(x, y);
			ft_putchar('\n');
			ft_putchar('o');
			if (x > 1)
			{
				ft_putstar(x);
				ft_putchar('o');
			}
		}
	}
	ft_putchar('\n');
}
