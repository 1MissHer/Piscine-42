/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:52:16 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/10 16:02:38 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	taille_de_dest;

	taille_de_dest = ft_strlen(dest);
	i = 0;
	while (src[i])
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
	char	src[] = "vraiment";
	char	dest[] = "noob";
	
	ft_strcat(dest, src);
	printf("%s\n", dest);
}
*/