/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:28:19 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/02 22:32:19 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(int argc, char *argv[])
{
	char	*dup;

	if (argc > 1)
	{
		printf("%s original address @ %p\n", argv[1], argv[1]);
		dup = strdup(argv[1]);
		printf("%s duplicated with strdup @ %p\n", dup, dup);
		dup = ft_strdup(argv[1]);
		printf("%s duplicated with ft_strdup @ %p\n", dup, dup);
		free(dup);
	}
	return (0);
}
