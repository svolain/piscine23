/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:18:47 by uahmed            #+#    #+#             */
/*   Updated: 2023/07/16 23:02:16 by rkorhone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_putval(unsigned int num, t_dict *dict, int *space)
{
	unsigned int	div;
	int				ind;

	ind = 0;
	div = ft_hundred_and_billion(num);
	if (div >= 100)
		ft_putval(num / div, dict, space);
	if (*space == 1)
		write(1, " ", 1);
	*space = 1;
	while (dict[ind].key != div)
		ind++;
	ft_putstr(dict[ind].val);
	if (num % div != 0 && div != 0)
		ft_putval(num % div, dict, space);
}
