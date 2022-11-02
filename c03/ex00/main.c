/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:43:44 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/29 17:25:47 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("%d", ft_strcmp("Hello", "H3ll0"));
	printf("\n%d", ft_strcmp("ABCDE", "abcde"));
	printf("\n%d", ft_strcmp("abcde", "ABCDE"));
	printf("\n%d", ft_strcmp("Hello", "Hello"));
}
