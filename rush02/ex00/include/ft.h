/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:26:22 by uahmed            #+#    #+#             */
/*   Updated: 2023/07/16 23:06:33 by rkorhone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_H
# define FT_H
# include<unistd.h>
# include<fcntl.h>
# include<stdlib.h>

# define ERROR_MSG_TOO_HIGH "Argument number inputted is way too high\n"
# define ERROR_MSG_FOUND_NON_NUMBER "Argument contains non numbers\n"
# define ERROR_MSG_NEGATIVE "Number is not within unsigned int range\n"
# define ERROR_MSG_DICT_ERR "Dict Error\n"

typedef struct s_dict
{
	unsigned int	key;
	char			*val;
}	t_dict;

void			ft_putstr(char *str);
void			ft_putval(unsigned int num, t_dict *dict, int *space);
t_dict			*create_dict(int fd);
unsigned int	ft_hundred_and_billion(unsigned int nb);
unsigned int	ft_atoi(char *str);
int				ft_atoi_check(char *str);
void			ft_error_handle(int n);
char			*ft_strdup(char *str);

#endif
