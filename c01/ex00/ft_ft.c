/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:46:36 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/05 16:08:12 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int *nbr;
	int i;

	i = 32;
	nbr = &i; 
	printf("%d\n", i);
    ft_ft(nbr);
    printf("%d\n", i);
}
