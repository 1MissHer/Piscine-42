/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:45:36 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/12 15:28:29 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
 */

int	ft_str_is_numeric(char n)
{
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	swap_signe;

	i = 0;
	nbr = 0;
	swap_signe = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			swap_signe *= -1;
		i++;
	}
	while (ft_str_is_numeric(str[i]))
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (nbr * swap_signe);
}

/*  int main(void)
{
	//int	r = atoi("                1245k");
	//printf("valeur de retour atoi = %d\n", r);
	int	r1 = ft_atoi("        ---++-+-5454sd4545");
	printf("valeur de retour ft_atoi = %d\n", r1);
}   */