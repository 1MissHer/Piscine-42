/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:41:55 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/05 23:09:30 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	int	tmp2;

	tmp = *a;
	*a = *a / *b;
	tmp2 = *a;
	*a = tmp;
	*b = *a % *b;
	*a = tmp2;
}
/*
int main(void)
{
	int a = 22;
	int b = 2;
	
	printf("valeur de a avant = %d et b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("resultat de la division = %d et le reste = %d\n", a, b);
}
*/