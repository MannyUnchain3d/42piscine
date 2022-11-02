/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:33:59 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/01 14:42:53 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(2, -4));
	printf("%d\n", ft_recursive_power(2, 0));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(2, 4));
}
