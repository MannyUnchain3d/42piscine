/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:25:44 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/30 19:04:48 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str0[] = "Find the needle in the haystack";
	char	str1[] = "needle";

	printf("result with ft_ strstr: %s\n", ft_strstr(str0, str1));
	printf("result with strstr: %s", strstr(str0, str1));
}
