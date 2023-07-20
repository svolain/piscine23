/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:52:07 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/05 15:31:57 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i - j]);
		}
		i = i - j + 1;
		j = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char	str[20] = "pool for swimmers";
	char	src[5] = "for";

	printf("%s", ft_strstr(str, src));
}
*/
