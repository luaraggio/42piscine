/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jveras <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:11:00 by jveras            #+#    #+#             */
/*   Updated: 2023/07/30 20:48:59 by jveras           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_and_last_line(int x)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if (c == 1 || c == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		c++;
	}
	ft_putchar('\n');
}

void	mid_line(int x)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if (c == 1 || c == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		c++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	l;

	l = 1;
	if (x <= 0 || y <= 0)
		return ;
	while (l <= y)
	{
		if (l == 1 || l == y)
			first_and_last_line(x);
		else
			mid_line(x);
		l++;
	}
}
