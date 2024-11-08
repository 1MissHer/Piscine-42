/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:05:27 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/10 20:21:05 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				taille_de_dest;

	taille_de_dest = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i])
	{
		dest[taille_de_dest + i] = src[i];
		i++;
	}
	dest[taille_de_dest + i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char	src[] = "glhf guys";
	char	dest[] = "hello world";
	unsigned int nb = 4;
	
	ft_strncat(dest, src, nb);
	printf("%s\n", dest);
}
*/
