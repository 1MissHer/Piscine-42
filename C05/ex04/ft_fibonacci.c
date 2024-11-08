/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:22:09 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/17 19:51:50 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*  int main(void)
{
	int a;
	int i;

	a = 0;
	i = 8;
	printf("valeur avant a = %d\nindex = %d\n", a, i);
	a = ft_fibonacci(i);
	printf("valeur de retour a = %d\nindex = %d\n", a, i);
}
 
 */