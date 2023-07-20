/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 07:38:52 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/19 15:44:17 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	arrsize;
	int	i;

	arrsize = max - min;
	if (min >= max)
		return (0);
	range[0] = (int *)malloc(sizeof(int) * arrsize);
	if (range[0] == 0)
		return (-1);
	i = 0;
	while (i < arrsize)
	{
		range[0][i] = min + i;
		i++;
	}
	return (arrsize);
}
/*
int	main(void)
{
	int	**range;
	int	arr;
	int	min;
	int	max;

	range = (int **)malloc(sizeof(int *));
	min = 3;
	max = 10;
	arr = ft_ultimate_range(range, min, max);
	printf("%d", arr);
}
*/
