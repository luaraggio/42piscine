/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 15:10:43 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/18 20:05:52 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_lens(char **str, int size)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (j < size)
	{	
		while (str[j][i] != '\0')
		{	
			i++;
			c++;
		}
		i = 0;
		j++;
	}
	return (c);
}

char	*ft_cat(char *pointer, int size, char *sep, char **strs)
{
	int	c;
	int	l;
	int	p;

	c = 0;
	l = 0;
	p = 0;
	while (l < size)
	{
		while (strs[l][c] != '\0')
			pointer[p++] = strs[l][c++];
		c = 0;
		if (l != size - 1)
		{
			while (sep[c] != '\0')
				pointer[p++] = sep[c++];
			c = 0;
		}
		l++;
	}
	pointer[p] = '\0';
	return (pointer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	char		*pointer;

	i = 0;
	if (size == 0)
	{
		pointer = malloc(1);
		pointer[0] = '\0';
		return (pointer);
	}
	pointer = malloc((ft_lens(strs, size)) + (ft_strlen(sep) * size));
	ft_cat(pointer, size, sep, strs);
	return (pointer);
}

/*int	main(void)
{
	char	*pt[] = {"oi,", "aqui", "?"};
	char	sep[] = {"/"};
	
	printf("%s", ft_strjoin(3, pt, sep));
}*/
