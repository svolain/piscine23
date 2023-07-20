/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogvine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:25:10 by alogvine          #+#    #+#             */
/*   Updated: 2023/07/16 22:58:28 by rkorhone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_above_twenty(unsigned int nb)
{
	if (nb >= 90)
		return (90);
	if (nb >= 80)
		return (80);
	if (nb >= 70)
		return (70);
	if (nb >= 60)
		return (60);
	if (nb >= 50)
		return (50);
	if (nb >= 40)
		return (40);
	if (nb >= 30)
		return (30);
	if (nb >= 20)
		return (20);
	return (nb);
}

unsigned int	ft_hundred_and_billion(unsigned int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	if (nb >= 1000000)
		return (1000000);
	if (nb >= 1000)
		return (1000);
	if (nb >= 100)
		return (100);
	return (ft_above_twenty(nb));
}
