/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:27:58 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/10 11:26:48 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	if_negative(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if ((nb < 0) && (nb > -2147483648))
	{
		write(1, "-", 1);
		nb *= -1;
	}
	return (nb);
}

int	get_div(int nb)
{
	int	temp;
	int	i;

	temp = nb;
	i = 0;
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	int	nbrdigits;
	int	i;
	int	str[11];
	int	v;
	int	x;

	i = 0;
	nb = if_negative(nb);
	nbrdigits = get_div(nb);
	while (i < nbrdigits)
	{
		v = nb % 10;
		str[i] = v + 48;
		i++;
		nb = nb / 10;
	}
	while (nbrdigits > 0)
	{
		nbrdigits--;
		x = str[nbrdigits];
		write(1, &x, 1);
	}
}

/*
int	main(void)
{
	int nb;

	nb = 0;
	ft_putnbr(nb);
}
*/
