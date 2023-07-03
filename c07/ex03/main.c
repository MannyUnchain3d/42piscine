/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Manny <etetopat@student.42bangkok.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:51:30 by etetopat          #+#    #+#             */
/*   Updated: 2023/07/03 19:07:36 by Manny            ###   ########.fr       */
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
