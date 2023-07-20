/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number_parameter.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alogvine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 14:22:36 by alogvine          #+#    #+#             */
/*   Updated: 2023/07/16 22:57:47 by rkorhone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"

int	ft_check_whitespace(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == ' '
		|| str[i] == '\f' || str[i] == '\t')
		i++;
	return (i);
}

int	ft_atoi_check(char *str)
{
	long long int	n;
	long long int	i;

	n = 0;
	i = ft_check_whitespace(str);
	if (str[i] == '-')
		return (-3);
	if (str[i] == '+')
		i++;
	if (n > 10)
		return (-1);
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (-2);
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}	
	if (n > 4294967295)
		return (-1);
	return (0);
}

unsigned int	ft_atoi(char *str)
{
	long long int	i;
	long long int	n;

	n = 0;
	i = 0;
	i = ft_check_whitespace(str);
	if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_error_handle(int i)
{
	if (i == -1)
		ft_putstr(ERROR_MSG_TOO_HIGH);
	if (i == -2)
		ft_putstr(ERROR_MSG_FOUND_NON_NUMBER);
	if (i == -3)
		ft_putstr(ERROR_MSG_NEGATIVE);
	if (i == -4)
		ft_putstr(ERROR_MSG_DICT_ERR);
}
