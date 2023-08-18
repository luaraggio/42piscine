/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:57:19 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/18 15:11:37 by lraggio          ###   ########.fr       */
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

/*int	main(void)
{
	int	*pointer;
	int	i;
	int	min = 2;
	int	max = 8;
	int	luara = max - min;

	i = 0;
	pointer = ft_range(min, max);
	while (i < luara)
	{
		printf("%d\n", pointer[i]);
		i++;
	}
}*/
