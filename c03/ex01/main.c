/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:53:16 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/29 17:46:24 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	printf("%d", ft_strncmp("Hello", "Hello World", 5));
	printf("\n%d", ft_strncmp("Hello", "Hello1", 6));
	printf("\n%d", ft_strncmp("Hello2", "Hell", 6));
}
