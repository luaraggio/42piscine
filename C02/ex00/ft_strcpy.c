/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 22:51:10 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/07 14:11:17 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{	
	char	dest[5];
	char	*pont;
	int i;

	i = 0;
	pont = ft_strcpy(dest, "Luara");

	while (pont[i] != '\0')
	{
		printf("%c", pont[i]);
		i++;
	}
	return (0);
}*/
