/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:10:56 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/01 19:17:57 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	printf("Is %d a prime number?: %d\n", -42, ft_is_prime(-42));
	printf("Is %d a prime number?: %d\n", 0, ft_is_prime(0));
	printf("Is %d a prime number?: %d\n", 1, ft_is_prime(1));
	printf("Is %d a prime number?: %d\n", 2, ft_is_prime(2));
	printf("Is %d a prime number?: %d\n", 3, ft_is_prime(3));
	printf("Is %d a prime number?: %d\n", 5, ft_is_prime(5));
	printf("Is %d a prime number?: %d\n", 7, ft_is_prime(7));
	printf("Is %d a prime number?: %d\n", 11, ft_is_prime(11));
	printf("Is %d a prime number?: %d\n", 13, ft_is_prime(13));
	printf("Is %d a prime number?: %d\n", 17, ft_is_prime(17));
}
