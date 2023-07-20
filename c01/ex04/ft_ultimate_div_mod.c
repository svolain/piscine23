/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 15:03:46 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/03 10:01:59 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	acopy;
	int	bcopy;

	acopy = *a;
	bcopy = *b;
	*a = acopy / bcopy;
	*b = acopy % bcopy;
}
