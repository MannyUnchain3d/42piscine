/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:28:09 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/01 11:35:54 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("Invalid argument returns: %d\n", ft_iterative_factorial(-1));
	printf("0! = %d\n", ft_iterative_factorial(0));
	printf("1! = %d\n", ft_iterative_factorial(1));
	printf("nb! = %d\n", ft_iterative_factorial(3));
}
