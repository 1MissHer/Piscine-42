/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:53:52 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/05 19:15:55 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main(void)
{
	int d;
	int e;
	int div;
	int mod;
	
	d = 22;
	e = 15;
	ft_div_mod(d, e, &div, &mod);
	printf("division de d et e = %d et le reste de d et e = %d\n", div, mod);	
}
*/