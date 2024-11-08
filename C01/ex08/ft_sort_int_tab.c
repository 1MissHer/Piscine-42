/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:51:12 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/25 19:32:07 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size - 1))
	{
		while (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	return ;
}

/* int	main(void)
{
	int	tab[5] = {42, 32, 12, 22, 2};
	ft_sort_int_tab(tab, 5);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	
} */