/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_putnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 12:16:13 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/17 12:21:00 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int check(int nb)
  {
      if (nb == -2147483648)
      {
          write(1, "-2147483648", 11);
          return (1);
      }
      if (nb == 0)
      {
          write(1, "0", 1);
          return (1);
      }
      return (0);
  }
  
 void    ft_putnbr(int nb)
  {
      char    c;
  
      if (check(nb))
          return ;
      if (nb < 0)
      {
          write(1, "-", 1);
          nb *= -1;
      }
      if (nb / 10 != 0)
          ft_putnbr(nb / 10);
      c = (nb % 10) + '0';
      write(1, &c, 1);
  }
