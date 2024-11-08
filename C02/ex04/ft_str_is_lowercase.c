/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:29:12 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/07 21:18:05 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] >= 'a' && str[i] <= 'z')
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}

/*
int main(void)
{
	int r = 2;

	printf("valeur avant fonction = %d\n", r);
	r = ft_str_is_lowercase("yolesnoobs");
	printf("valeur de retour apres la fonction = %d\n", r);
}
*/