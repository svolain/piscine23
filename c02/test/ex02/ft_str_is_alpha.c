/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:11:49 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/06 08:08:15 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			if (str[i] < 'a' || str[i] > 'z')
				return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	*str;
	str = "";
	printf("%d", ft_str_is_alpha(str));
}
*/
