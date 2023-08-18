/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 22:15:25 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/12 23:41:32 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if ((nb == 0) || (nb == 1))
		return (1);
	while (nb != 1)
	{
		n = n * nb;
		nb --;
	}
	return (n);
}

/*int	main(void)
{
	int	vaientrar = 4;

	printf("%d", ft_iterative_factorial(vaientrar));
}*/
