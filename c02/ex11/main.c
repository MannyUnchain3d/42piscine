/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:49:47 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/27 21:58:04 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_putchar(char c);

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putchar('\n');
	return (0);
}
