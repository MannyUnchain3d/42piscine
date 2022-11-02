/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:51:30 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/03 17:18:33 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char *argv[])
{
	char	*result;

	result = ft_strjoin(argc, argv, "----");
	printf("%s\n", result);
	free(result);
	return (0);
}	
