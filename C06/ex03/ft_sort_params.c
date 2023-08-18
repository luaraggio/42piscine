/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:00:12 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/16 16:39:34 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	bubble_sort(int argc, char **argv)
{
	int		i;
	int		j;
	char	*backup;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				backup = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = backup;
			}
			j++;
		}
		i++;
	}
}

//Test2 Teste1 | Argc = 3; 

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	bubble_sort(argc - 1, argv);
	j = 1;
	i = 0;
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		j++;
	}
	return (0);
}
