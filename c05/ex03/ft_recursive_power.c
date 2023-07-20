/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:34:17 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/10 14:46:18 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if ((power == 0) && (nb == 0))
	{
		return (1);
	}
	if (power > 0)
	{
		result *= nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}

/*
int main(void)
{
    printf("%d", ft_recursive_power(4, 3));
}
*/
