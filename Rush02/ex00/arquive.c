/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arquive.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:33:27 by gamoraes          #+#    #+#             */
/*   Updated: 2023/08/13 20:34:25 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_pustr(char *str);

int     open_arquive(char *arquive_name, int mode)
{
    int	arquive;

    arquive = open("numbers.dict", "r");
    if (arquive == -1)
    {
        ft_putstr("Error\n");
        return (-1);
    }
    return (arquive);
}

void	read_arquive(char *arquive_name, char *argv[1])
{
    int		arquive;
	char	buffer[1024];
    ssize_t	bytes_read;
    
    arquive = open_arquive("numbers.dict", O_RDONLY);
    while ((bytes_read = read(arquive, buffer, sizeof(buffer))) > 0)
    {
        //ler a linha.
    }
    if (bytes_read == -1)
    {
        ft_putstr("Error\n");
        close(arquive);
        return (1);
    }
    close(arquive);
}

void	write_arquive(char *arquive_name, char *argv[2])
{
	int	arquive;

	arquive = open_arquive("numbers.dict"
			, O_WRONLY);
}
