/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:33:13 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/19 15:40:26 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
//#include<stdio.h>

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

/*
int	main(void)
{
	char	*src;

	src = "abc";
	printf("%s", ft_strdup(src));
}
*/
