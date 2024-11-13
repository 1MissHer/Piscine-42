/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:16:47 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/25 16:23:08 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN(nbr) ((nbr % 2) == 0)

void	ft_putstr(char *str);
typedef int	t_bool;
t_bool	ft_is_even(int nbr);

#endif
