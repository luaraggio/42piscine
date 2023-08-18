/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:51:48 by gamoraes          #+#    #+#             */
/*   Updated: 2023/08/13 16:29:13 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

    i = 0;
    while (str[i] != '\0')
        write(1, &str[i++], 1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0' && to_find[j] != '\0')
	{
		if (to_find[j] == str[i])
			j++;
		else
			j = 0;
		i++;
	}
	if (to_find[j] == '\0')
		return (&str[i - j]);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	num;

	i = 0;
	num = 0;
	minus = 1;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			minus = minus * (-1);
	while (str[i] >= '0' && str[i] <= '9')
		num = num * 10 + str[i++] - 48;
	return (num * minus);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}
