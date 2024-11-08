/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:52:08 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/24 22:14:02 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	nb;
	int	*tab;

	tab = malloc(sizeof(int) * (max - min + 1));
	if (min >= max)
		return (0);
	i = 0;
	nb = min;
	while (nb < max)
	{
		tab[i] = nb;
		i++;
		nb++;
	}
	return (tab);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range[i] = ft_range(min, max);
	return (max - min);
}

/* #include <stdio.h>
int main(void)
{
	int r = 0;
	int	*tab;

	ft_ultimate_range(&tab, 10, 100);
	while (r < 90)
	{
		printf("%d\n", tab[r]);
		r++;
	}
} */