/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pedro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:14:01 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/18 16:39:00 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc == 2)
		while(argv[j][i] != '\0')
		{
			if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
			{
				argv[j][i] += 32;
			}
			else if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
			{
				argv[j][i] -= 32;
			}
			write(1, &argv[j][i], 1);
			i++;
		}
}