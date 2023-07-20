# define ABS(x)((ft_abs(x)))/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:58:31 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/20 08:41:40 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(x)((ft_abs(x)))

int	ft_abs(int Value)
{
	if (Value < 0)
		return ((Value) * -1);
	else
		return (Value);
}

#endif
