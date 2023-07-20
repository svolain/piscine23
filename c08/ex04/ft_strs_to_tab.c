/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:09:15 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/18 09:54:16 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		strlen;

	strlen = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * (strlen + 1));
	if (dup == '\0')
		return (0);
	ft_strcpy(dup, src);
	return (dup);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int				i;
	t_stock_str		*ptr;

	i = 0;
	ptr = malloc((ac + 1) * sizeof(t_stock_str));
	if (ptr == 0)
		return (0);
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		if (ptr[i].copy == 0)
		{
			free(ptr[i].copy);
			return (0);
		}
		i++;
	}
	ptr[i] = (t_stock_str){0, 0, 0};
	return (ptr);
}

/*
{
//	char **av;
//	int ac;

//	ac = 3;
//	av = (char **)malloc(sizeof(char *) * ac);
	if (av == 0)
		return (0);
//	av[0] = "a.out";
//	av[1] = "abc";
//	av[2] = "def";
//	av[3] = "ghi";
	ft_show_tab(ft_strs_to_tab(ac, av));
	return (0);
}
*/
