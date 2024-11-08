/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:15:04 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/17 19:51:44 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = nb;
	if (power < 0)
		return (0);
	if ((nb == 0 && power == 0) || (power == 0))
		return (1);
	while (i < power)
	{
		nb = (tmp * nb);
		i++;
	}
	return (nb);
}

/*  int	main(void)
{
	int a;
	int nb;
	int	pui;

	a = 0;
	nb = 0;
	pui = -1;
	printf("valeur avant = %d\n", a);
	a = ft_iterative_power(nb, pui);
	printf("valeur de nb = %d\npuissance de = %d\nresultat = %d\n", nb, pui, a);
	
}  */