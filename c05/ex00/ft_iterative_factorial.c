/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 07:11:44 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/10 08:28:44 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	factorial = nb;
	while (nb > 1)
	{
		factorial *= nb - 1;
		nb--;
	}
	return (factorial);
}

/*
int	main(void)
{
	int	nb;

	nb = 6;
	printf("%d", ft_iterative_factorial(nb));
}
*/
