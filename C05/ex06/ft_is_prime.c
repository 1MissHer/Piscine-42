/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:08:24 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/17 19:52:05 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	tmp;

	if (nb == 1 || nb == 0)
		return (0);
	i = (nb - 1);
	while (i > 1)
	{
		tmp = nb % i;
		if (tmp == 0)
			return (0);
		i--;
	}
	return (1);
}

/* int	main(void)
{
	int a;
	int nb;

	a = 0;
	nb = 1;
	printf("valeur avant = %d\n", a);
	a = ft_is_prime(nb);
	printf("valeur de retour = %d\n", a);
} */