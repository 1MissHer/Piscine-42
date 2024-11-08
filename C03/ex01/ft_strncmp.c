/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:33:21 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/11 16:09:43 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* int main(void)
{
	int r = 2;
	unsigned int n = -1;
	char	s1[] = "yop";
	char	s2[] = "yop";
	r = ft_strncmp(s1, s2, n);
	printf("ma fonction : s1 = %s\ns2 = %s\nvaleur de retour = %d\n", s1, s2, r);
	r = strncmp(s1, s2, n);
	printf("strncmp : s1 = %s\ns2 = %s\nvaleur de retour = %d\n", s1, s2, r);
	
}  */
