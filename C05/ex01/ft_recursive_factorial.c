/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:55:15 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/12 23:40:55 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb > 0)
		i = nb * ft_recursive_factorial (nb - 1);
	return (i);
}

/*int	main(void)
{
	int	factorial = 5;

	printf("%d", ft_recursive_factorial(factorial));
}*/
