/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:01:35 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/30 19:56:41 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "42 Bangkok";
	char	dest[] = "Welcome to ";

	printf("%u\n", ft_strlcat (dest, src, 22));
	printf("%s\n", dest);
}
