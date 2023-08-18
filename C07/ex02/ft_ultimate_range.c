/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:57:47 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/18 15:11:27 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*nbr;

	i = 0;
	nbr = malloc(sizeof(int) * (max - min));
	if (!nbr)
		return (NULL);
	if (min >= max)
		return (0);
	while (min < max)
	{
		nbr[i] = min;
		i++;
		min++;
	}
	return (nbr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (!range)
		return (-1);
	return (max - min);
}

/*int	main(void)
{
	int	*range;
	int	i = 0;
	int	size;

	size = ft_ultimate_range(&range, 7, 20);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}	
}*/
