/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:21:19 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/24 22:12:50 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	nb;
	int	*tab;

	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
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

/* int	main(void)
{
	int *tab;
	int r = 0;
	
	tab = ft_range(12, 45);
	while (r < 33)
	{
		printf("%d\n", tab[r]);
		r++;
	}
} */