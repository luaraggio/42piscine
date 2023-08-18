/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:19:41 by gamoraes          #+#    #+#             */
/*   Updated: 2023/08/13 19:22:25 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //exemplo (deletar depois)

void	ft_putstr(char *str);

int	ft_str_is_numeric(char *str);

int	open_arquive(char *archive_name, int mode);

void	ft_print_number(char *argv[])
{
	
}

int	main(int argc, char *argv[])
{
	int	verify_numeric;

	if (argc == 2)
	{
		verify_numeric = ft_str_is_numeric(argv[1]);
		if (verify_numeric == 1)
			ft_print_number(argv[1]);
		else
			ft_putstr("Error\n");
	}
	else if (argc == 3)
	{
		verify_numeric = ft_str_is_numeric(argv[1]);
		if (verify_numeric == 1)
			printf("tem numero e outra parada");
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}


