/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:46:31 by etetopat          #+#    #+#             */
/*   Updated: 2022/01/27 19:50:10 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)

{
	printf("%d", ft_str_is_uppercase("ABCDEFGH"));
	printf("\n%d", ft_str_is_uppercase("abcdefgh"));
	printf("\n%d", ft_str_is_uppercase("-1345567ab"));
}
