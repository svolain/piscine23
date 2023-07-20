/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cdict.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:33:46 by uahmed            #+#    #+#             */
/*   Updated: 2023/07/16 23:10:49 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

char	*ft_strdup(char *str)
{
	char	*tmp;
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	tmp = (char *)malloc(i);
	if (!tmp)
		return ("-1");
	i = 0;
	while (str[i] != '\0')
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	*save_key(int fd, char *s)
{
	int		ind;
	char	*str;
	char	*neg;

	ind = 0;
	neg = "-1";
	str = (char *)malloc(10 * sizeof(char));
	if (!str)
		return (neg);
	while (s[0] == '\n')
		read(fd, s, 1);
	if (!(s[0] >= '0' && s[0] <= '9'))
	{
		ft_error_handle(-4);
		return (neg);
	}
	while (s[0] >= '0' && s[0] <= '9')
	{
		str[ind++] = s[0];
		read(fd, s, 1);
	}
	return (str);
}

char	*save_val(int fd, char *s)
{
	int		ind;
	char	*str;

	ind = 0;
	str = (char *)malloc(10 * sizeof(char));
	if (!str)
		exit(1);
	while (s[0] != '\n')
	{
		str[ind++] = s[0];
		read(fd, s, 1);
	}
	return (str);
}

char	handle_spcs(int fd, char *s)
{
	while (s[0] == ' ')
		read(fd, s, 1);
	if (s[0] == ':')
		read(fd, s, 1);
	while (s[0] == ' ')
		read(fd, s, 1);
	return (s[0]);
}

t_dict	*create_dict(int fd)
{
	t_dict	*dict;
	char	*temp;
	int		ind;
	char	s[1];

	dict = (t_dict *)malloc(32 * sizeof(t_dict));
	if (fd == -1 || !dict)
		exit(1);
	ind = 0;
	while (read(fd, s, 1) > 0)
	{
		dict[ind].key = ft_atoi(save_key(fd, s));
		if ((int)dict[ind].key == -3)
			return (0);
		read(fd, s, 1);
		s[0] = handle_spcs(fd, s);
		temp = save_val(fd, s);
		dict[ind].val = ft_strdup(temp);
		free(temp);
		ind++;
	}
	close(fd);
	return (dict);
}
