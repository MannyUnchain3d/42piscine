/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manny <etetopat@student.42bangkok.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 22:43:44 by etetopat          #+#    #+#             */
/*   Updated: 2023/06/21 21:56:14 by Manny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("ft_strcmp:  %d", ft_strcmp("Hello", "H3ll0"));
	printf("\nstrcmp:      %d", strcmp("Hello", "H3ll0"));
	printf("\nft_strcmp: %d", ft_strcmp("ABCDE", "abcde"));
	printf("\nstrcmp:     %d", strcmp("ABCDE", "abcde"));
	printf("\nft_strcmp:  %d", ft_strcmp("abcde", "ABCDE"));
	printf("\nstrcmp:      %d", strcmp("abcde", "ABCDE"));
	printf("\nft_strcmp:   %d", ft_strcmp("Hello", "Hello"));
	printf("\nstrcmp:      %d\n", strcmp("Hello", "Hello"));
}
