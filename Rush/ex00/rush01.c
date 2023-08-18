/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 21:01:23 by lraggio           #+#    #+#             */
/*   Updated: 2023/07/30 21:54:56 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	first_line(int x)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if (c == 1)
			ft_putchar('/');
		else if (c == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
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
			ft_putchar('*');
		else
			ft_putchar(' ');
		c++;
	}
	ft_putchar('\n');
}

void	last_line(int x)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if (c == 1)
			ft_putchar('\\');
		else if (c == x)
			ft_putchar('/');
		else
			ft_putchar('*');
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
		if (l == 1)
			first_line(x);
		else if (l == y)
			last_line(x);
		else
			mid_line(x);
		l++;
	}
}
