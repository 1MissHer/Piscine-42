/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:35:56 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/07 21:18:30 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] >= 'A' && str[i] <= 'Z')
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

	printf("valeur avant = %d\n", r);
	r = ft_str_is_uppercase("NOOBS");
	printf("valeur apres = %d\n", r);
}
*/