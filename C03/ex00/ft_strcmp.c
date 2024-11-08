/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:17:43 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/11 15:53:51 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* int main(void)
{
	char	s1[] = "-97RSHGHJASDLGIASDGHUP";
	char	s2[] = "K";
	//char 	s3[] = "bok";
	//char	s4[] = "bogggggggggggggggg";
	int	r = ft_strcmp(s1, s2);
	printf("valeur de retour de la mienne = %d\ns1 = %s\ns2 = %s\n", r, s1, s2);
	int r2 = strcmp(s1, s2);
	printf("valeur de retour strcmp= %d\ns1 = %s\ns2 = %s\n", r2, s1, s2);
} */
