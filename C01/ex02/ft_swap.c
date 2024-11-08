/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:55:43 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/05 20:59:04 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
int main(void)
{
	int a;
	int b;
	
	a = 22;
	b = 42;
	printf("valeur de a = %d valeur de b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("nouvelle valeur : a = %d b = %d\n", a, b);
}
*/