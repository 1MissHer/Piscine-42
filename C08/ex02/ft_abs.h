/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lillopez <lillopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:40:55 by lillopez          #+#    #+#             */
/*   Updated: 2024/09/25 14:50:37 by lillopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H

# define FT_ABS_H
# define ABS abs

int	abs(int value)
{
	if (value < 0)
		value *= -1;
	return (value);
}

#endif
