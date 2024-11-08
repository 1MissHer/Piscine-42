/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:04:44 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/11 20:15:20 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
	{
		i++;
		if (str[i] == '\0')
			return (1);
	}
	return (0);
}

/*
int main(void)
{
	int r = 2;
	printf("valeur de retour avant fonction = %d\n", r);
	r = ft_str_is_alpha("yoLesNoobs");
	printf("valeur de retour apres fonction = %d\n", r);
}
*/