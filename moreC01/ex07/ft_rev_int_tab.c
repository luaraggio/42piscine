/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 01:21:06 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/18 17:47:35 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	m;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		m = tab[i];
		tab[i] = tab[j];
		tab[j] = m;
		i++;
		j--;
	}
}

/*int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	size = 5;
	int	i = 0;

	ft_rev_int_tab(tab, size);
	while (i < size)
	{	
		printf("int_array[] = %d\n", tab[i]);
		i++;
	}
}*/
