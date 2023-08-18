/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 01:19:42 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/17 17:20:10 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	backup;

	j = 0;
	while (j < size - 1)
	{
		while (i < size - j - 1)
		{
			if (tab[i] >= tab[i + 1])
			{	
				backup = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = backup;
			}
			i++;
		}
		i = 0;
		j++;
	}
}

/*int	main(void)
{
	int	tab[6] = {9, 3, 7, 1, 0, 2};
	int	size = 6;
	int	i = 0;

	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("test = %d\n", tab[i]); 
		i++;
	}
}*/
