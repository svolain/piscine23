/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsavolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 06:18:23 by vsavolai          #+#    #+#             */
/*   Updated: 2023/07/20 13:31:58 by vsavolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i == 0)
	{
		if (s1[j] > s2[j])
		{
			i = s1[j] - s2[j];
		}
		else if (s1[j] < s2[j])
		{
			i = s1[j] - s2[j];
		}
		if (s1[j] == '\0')
		{
			break ;
		}
		j++;
	}
	return (i);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ab";
	s2 = "AB";
	printf("%d", ft_strcmp(s1, s2));
}
*/
