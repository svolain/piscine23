/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 07:27:28 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/10 08:18:09 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb > 1)
	{
		factorial *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (factorial);
}

/*
int	main(void)
{
	int	nb;

	nb = 5;
	printf("%d", ft_recursive_factorial(nb));
}
*/
