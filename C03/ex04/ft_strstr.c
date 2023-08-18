/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:39:02 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/10 20:54:18 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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

/*int	main(void)
{	
	char	str[] = "Good after!";
	char	to_find[] = "after";

	printf("%s", ft_strstr(str, to_find));
}*/
