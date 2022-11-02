/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:54:52 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/01 20:02:25 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *name)
{
	int	i;

	i = 0;
	while (name[i])
	{
		write (1, &name[i], 1);
		i++;
	}
	write (1, &"\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 0)
		ft_print_program_name(argv[0]);
}
