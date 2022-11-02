/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:55:57 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/21 11:17:54 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcomb(char a, char b, bool end)
{
	ft_putchar(a);
	ft_putchar(b);
	if (end)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(void)
{
	char	a;
	char	b;
	bool	end;

	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			end = !(a == '8' && b == '9');
			ft_putcomb(a, b, end);
			b++;
		}
		a++;
	}
}
