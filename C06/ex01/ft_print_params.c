/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:44:25 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/16 16:34:25 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		i = 0;
		j++;
		write(1, "\n", 1);
	}
}
