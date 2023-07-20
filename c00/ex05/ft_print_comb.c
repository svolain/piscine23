/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 10:08:53 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/19 11:40:17 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char a, char b, char c)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &comma, 1);
		write(1, &space, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	n;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			n = j + 1;
			while (n <= '9')
			{
				ft_putchar(i, j, n);
				n++;
			}
			j++;
		}
		i++;
	}
}
