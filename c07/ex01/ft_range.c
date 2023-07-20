/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 06:16:38 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/19 15:43:25 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	arrsize;
	int	i;

	i = 0;
	arrsize = max - min;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * arrsize);
	while (i < arrsize)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}

/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*arr;

	i = 0;
	min = 3;
	max = 10;
	arr = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d", arr[i]);
		i++;
	}
}
*/
