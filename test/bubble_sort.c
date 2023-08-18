/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lraggio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:09:46 by lraggio           #+#    #+#             */
/*   Updated: 2023/08/17 15:09:55 by lraggio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    bubble_sort(char **str, int n)
{
    int        i;
    int        j;
    char    *backup;

    i = 1;
    while (i < n)
    {
        j = 1;
        while (j < n)
        {
            if (ft_strcmp(str[j], str[j + 1]) > 0)
            {
                backup = str[j];
                str[j] = str[j + 1];
                str[j + 1] = backup;
            }
            j++;
        }
        i++;
    }
}
