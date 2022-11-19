/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manny <etetopat@student.42bangkok.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:01:35 by etetopat          #+#    #+#             */
/*   Updated: 2022/11/19 14:18:44 by Manny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[] = "Welcome to ";
	char	src[] = "42 Bangkok";

	printf("%u\n", ft_strlcat (dest, src, 1));
	printf("%s\n", dest);
}
