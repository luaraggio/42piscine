/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 19:22:35 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/13 21:02:18 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 

int	ft_strlen(char *str)
{
	char	ones;
	char	tens;
	char	thousand;
	char	hundred;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

if (argv[1] > "0")
	ones = {"one", "two","three", "four", "five", "six", "seven", "eight", "nine"};
if (agrv[i] > "9")
	tens = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
