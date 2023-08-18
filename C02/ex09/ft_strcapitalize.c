/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 21:33:17 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/09 11:34:11 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[i] -= 32;
		if (str[i] == 32 && str[i + 1] >= 97 && str[i + 1] <= 122)
			str[i + 1] -= 32;
		i++;
	}	
	return (str);
}

/*int	main(void)
{
	char	j[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(j);
	printf("%s", j);
}*/
