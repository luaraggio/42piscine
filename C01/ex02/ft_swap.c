/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:20:39 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/03 22:53:50 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap( int *a, int *b)
{
	int	intermediary;

	intermediary = *a;
	*a = *b;
	*b = intermediary;
}

/*int	main(void)
{
	int	a = 1;
	int	b = 2;
	
	printf("%d \n", a);
	printf("%d", b);
	return (0);
}*/
