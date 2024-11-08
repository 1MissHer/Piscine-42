/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:02:27 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/24 21:59:05 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	size;

	i = 0;
	size = ft_strlen(s1);
	while (s2[i])
	{
		s1[size + i] = s2[i];
		i++;
	}
	s1[size + i] = '\0';
	return (s1);
}

int	count_char(int size, char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j += ft_strlen(str[i]);
		i++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		k;
	char	*result;
	int		fullsize;

	fullsize = (count_char(size, strs) + (size - 1) * ft_strlen(sep));
	i = 0;
	result = malloc(sizeof(char) * fullsize + 1);
	*result = '\0';
	if (size == 0)
		return (result);
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != (size - 1))
		{
			ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}

/*  int main(void)
{
	char *strs[] = {"yo", "les", "noobs"};
	char *sep = "-_-";
	printf("%s", ft_strjoin(3, strs, sep));
	
}  */