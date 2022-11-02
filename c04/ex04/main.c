/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:31:28 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/31 22:27:34 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(42, "0123456789");
	printf("\n");
	ft_putnbr_base(42, "01");
	printf("\n");
	ft_putnbr_base(42, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(42, "poneyvif");
	printf("\n");
	ft_putnbr_base(42, "-");
}	
