/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:22:17 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/17 19:52:09 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	tmp;

	i = (nb - 1);
	if (nb == 1 || nb == 0)
		return (2);
	while (i > 1)
	{
		tmp = nb % i;
		if (tmp == 0)
		{
			nb++;
			i = (nb - 1);
		}
		i--;
	}
	return (nb);
}
/* 
 int main(void)
{
	int a;
	int nb;

	a = 0;
	nb = 0;
	printf("valeur avant = %d\n", a);
	a = ft_find_next_prime(nb);
	printf("valeur de retour = %d\n", a);
}  */