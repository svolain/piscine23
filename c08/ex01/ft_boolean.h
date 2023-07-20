/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:56:43 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/17 19:56:39 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

void	ft_putstr(char *str);
typedef enum t_bool { true = 1, false = 0 }	t_bool;

# define EVEN(nbr) (!(nbr % 2)) 

# define TRUE true
# define FALSE false 
# define EVEN_MSG "I have an even number of arguments.\n" 
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif
