/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 06:51:25 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/08 09:02:30 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	j;
	unsigned int	s1len;
	unsigned int	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	j = 0;
	while (j < n)
	{
		if (s1[j] > s2[j])
		{
			return (1);
		}
		else if (s1[j] < s2[j])
		{
			return (-1);
		}
		if (j == s1len || j == s2len)
		{
			return (0);
		}
		j++;
	}
	return (0);
}

/*
int	main(void)
{
	char			*s1;
	unsigned int	n;
	char			*s2;

	s1 = "ABI";
	s2 = "ABI";
	n = 4;
	printf("%d", ft_strncmp(s1, s2, n));
}
*/
