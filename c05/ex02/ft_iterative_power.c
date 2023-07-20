/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 08:51:50 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/10 10:33:02 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = power;
	result = nb;
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
		while (i > 1)
		{
			result *= nb;
			i--;
		}
		return (result);
	}
	return (1);
}

/*
int main(void)
{
    int nb;
    int power;

    nb = 0;
    power = 0;
    printf("%d", ft_iterative_power(nb, power));
}
*/
