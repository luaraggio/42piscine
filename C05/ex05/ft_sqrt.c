/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:53:02 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/15 22:03:44 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{	
	long	i;
	long	j;

	j = nb;
	if (j < 0)
		return (0);
	if (j == 1)
		return (1);
	i = 2;
	while (i * i <= j)
	{
		if (i * i == j)
			return (i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt (81));
}*/
