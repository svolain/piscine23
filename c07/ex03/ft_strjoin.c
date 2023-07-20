/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <vsavolai@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:48:50 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/19 15:45:23 by vsavolai         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		dest_length;
	int		i;
	char	*dest;

	i = 0;
	dest_length = ft_strlen(sep) * (size - 1);
	if (size == 0)
		return (NULL);
	while (i < size)
	{
		dest_length += ft_strlen(strs[i]);
		i++;
	}
	dest_length++;
	dest = (char *)malloc(sizeof(char) * dest_length);
	dest[0] = '\0';
	ft_strcpy(dest, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(dest, sep);
		ft_strcat(dest, strs[i]);
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	int		size;
	char	**strs;
	char	*sep;
	int		i;
	char	*dest;

	size = 3;
	strs = (char **)malloc(sizeof(char *) * size);
	i = 0;
	sep = ",";
	strs[0] = "abc";
	strs[1] = "def";
	strs[2] = "ghi";
	dest = ft_strjoin(size, strs, sep);
	sep = ",";
	printf("%s", dest);
}
*/
