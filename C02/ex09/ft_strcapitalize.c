/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:11:58 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/11 20:17:01 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <unistd.h>

int	ft_c_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_c_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((ft_c_is_numeric(str[i - 1]) || ft_c_is_alpha(str[i - 1])))
		{
			if (ft_c_is_alpha(str[i]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

/* int main(void)
{
	char buff[] = "salut, comment tu vas ? 
	42mots quarante-deux; cinquante+et+en";
	printf("%s\n", ft_strcapitalize(buff));

} */
