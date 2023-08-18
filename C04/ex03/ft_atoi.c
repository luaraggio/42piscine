/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 03:13:34 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/14 14:40:10 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i; 
	int	j;
	int	h;
	int	result1;
	int	result2;

	i = 0;
	j = 1;
	h = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= '\a' ) && (str[i] <= '\r'))
			i++;
		while ((str[i] == '+') || (str[i] == '-'))
		{
			if (str[i] == '-')
			{
				result1 = j * -1;
				i++;
			}
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			h = h * 10;
			result2 = str[i++] - '0';
		}
	}
	return (result1 * result2);
}

/*int	main(void)
{
	printf("%d", ft_atoi( "	---+--+1234ab567"));
}*/
