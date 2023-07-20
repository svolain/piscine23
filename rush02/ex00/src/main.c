/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uahmed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:23:30 by uahmed            #+#    #+#             */
/*   Updated: 2023/07/16 23:20:55 by uahmed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	get_argv(int argc, char **argv, unsigned int *n, char **filepath)
{
	int	error;

	error = 0;
	if (argc == 2)
	{
		error = ft_atoi_check(argv[1]);
		if (error == 0)
			*n = ft_atoi(argv[1]);
		*filepath = "numbers.dict";
	}
	else if (argc == 3)
	{
		error = ft_atoi_check(argv[2]);
		if (error == 0)
			*n = ft_atoi(argv[2]);
		*filepath = ft_strdup(argv[1]);
	}
	if (error < 0)
	{
		ft_error_handle(error);
		return (0);
	}
	return (1);
}

void	ft_application(unsigned int n, char *filepath)
{
	int		fd;
	t_dict	*dict;
	int		sp;

	sp = 0;
	fd = open(filepath, O_RDONLY);
	dict = create_dict(fd);
	if (!dict)
		return ;
	ft_putval(n, dict, &sp);
	free(dict);
}

int	main(int argc, char **argv)
{
	unsigned int	n;
	char			*filepath;

	n = 0;
	if (get_argv(argc, argv, &n, &filepath) == 1)
		ft_application(n, filepath);
	return (0);
}
