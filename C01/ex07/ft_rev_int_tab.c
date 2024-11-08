/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 20:05:49 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/25 18:49:32 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	if (!tab)
		return ;
	j = (size - 1);
	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[j];
		tab[j] = tmp;
		i++;
		j--;
	}
	return ;
}

/*  int main(void)
{
	int i;
	int tab[5] = {2, 12, 22, 32, 42};

	i = 0;
	ft_rev_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}  */