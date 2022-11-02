/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:04:28 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/03 15:40:43 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	min = 1;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
