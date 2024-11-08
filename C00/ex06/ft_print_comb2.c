/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:40:33 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/07 17:30:25 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		return ;
	}
	write(1, ", ", 2);
}

void	boucled(char a, char b, char c, char d)
{
	while (d <= '9')
	{
		print(a, b, c, d);
		d++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	d = '1';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			d = b + 1;
			while (c <= '9')
			{
				boucled(a, b, c, d);
				d = '0';
				c++;
			}
			b++;
		}
		a++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
}
*/