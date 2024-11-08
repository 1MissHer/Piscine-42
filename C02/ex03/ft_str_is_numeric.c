/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:22:46 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/07 21:17:17 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] >= '0' && str[i] <= '9')
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
	r = ft_str_is_numeric("");
	printf("valeur de retour de la fonction = %d\n", r);
}
*/