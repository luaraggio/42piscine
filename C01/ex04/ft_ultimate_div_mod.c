/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:27:46 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/03 22:54:31 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod( int *a, int *b )
{
	int	i;
	int	j;

	i = *a;
	j = *b;
	*a = i / j;
	*b = i % j;
}

/*int	main(void)
{
	int	a;
	int	b;
	a = 10;
	b = 2;

	ft_ultimate_div_mod(&a , &b);
	printf("%d \n", a);
	printf("%d", b);
	return (0);
}*/
