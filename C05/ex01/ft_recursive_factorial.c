/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:54:09 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/17 19:51:37 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*  int	main(void)
{
	int a;
	int	nb;

	a = 0;
	nb = 5;
	printf("valeur avant = %d\n", a);
	a = ft_recursive_factorial(nb);
	printf("valeur de la factoriel de nb = %d\n", a);
}  */