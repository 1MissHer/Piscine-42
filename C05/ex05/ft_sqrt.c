/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:42:50 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/17 19:52:59 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (tmp <= nb)
	{
		tmp = i * i;
		if (nb == tmp)
			return (i);
		i++;
	}
	return (0);
}
/* int main(void)
{
	int	a;
	int	nb;

	a = 0;
	nb = 45;
	printf("valeur avant = %d\n", a);
	a = ft_sqrt(nb);
	printf("valeur de retour = %d\n", a);
} */