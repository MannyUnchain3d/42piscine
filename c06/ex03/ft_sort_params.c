/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etetopat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:41:20 by etetopat          #+#    #+#             */
/*   Updated: 2022/02/02 14:03:08 by etetopat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write (1, &str[i], 1);
	write (1, &"\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		c;
	char	*tmp;

	i = 0;
	c = 0;
	while (++c < argc - 1)
	{
		if (ft_strcmp(argv[c], argv[c + 1]) > 0)
		{
			tmp = argv[c];
			argv[c] = argv[c + 1];
			argv[c + 1] = tmp;
			c = 0;
		}
	}
	while (++i < argc)
		ft_putstr(argv[i]);
}
