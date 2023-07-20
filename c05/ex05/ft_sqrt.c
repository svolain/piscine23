/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:33:53 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/10 14:40:42 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	while (root * root <= nb)
	{
		if (root * root == nb)
		{
			return (root);
		}
		root ++;
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d", ft_sqrt(25));
}
*/
