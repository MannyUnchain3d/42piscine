/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:52:32 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/02 23:29:27 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	min = 1;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
}
