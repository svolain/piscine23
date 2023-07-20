/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:31:07 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/20 09:13:55 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

/*
void	ft_putstr(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	write(1, str, j);
}*/

void    ft_putstr(char *str)
{
    int j;

    j = 0;
    while (str[j] != '\0')
    {
		write(1, &str[j], 1);
        j++;
    }
}

int main(void)
{
    char *str;

    str = "Hello";
    ft_putstr(str);
}
