/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:30:29 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/18 13:34:30 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* int main(void)
{
	int a;
	int nb;
	int power;

	a = 0;
	nb = 1;
	power = 0;
	printf("valeur avant = %d\nnombre = %d\npuissance = %d\n", a, nb, power);
	a = ft_recursive_power(nb, power);
	printf("valeur apres puissance = %d\nnombre = %d\npuissance 
	= %d\n", a, nb, power);
} 
 */