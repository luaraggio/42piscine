/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 23:42:08 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/14 15:30:50 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(2,3));
}*/
