/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:50:31 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/18 13:33:59 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	tmp;
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	tmp = nb;
	while (nb != i || nb == 1)
	{
		nb *= i;
		if (i == (tmp -1))
			return (nb);
		i++;
	}
	return (0);
}

/*   int main(void)
{
	int	a;
	int nb;

	nb = 1;
	a = 0;
	printf("valeur avant = %d\n", a);
	a = ft_iterative_factorial(nb);
	printf("valeur de la factoriel = %d\n", a);
}   */