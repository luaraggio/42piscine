/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:25:05 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/03 21:06:11 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod( int a, int b, int *div, int *mod )
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	div;
	int	mod;
	int	a = 5;
	int	b = 3;

	ft_div_mod(a, b, &div, &mod);
	printf("%d \n", div); 
	printf("%d", mod);
	return (0);
}*/
