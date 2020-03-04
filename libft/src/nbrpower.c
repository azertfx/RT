/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrpower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezzahir <hezzahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 15:53:30 by hezzahir          #+#    #+#             */
/*   Updated: 2020/02/27 23:43:29 by hezzahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	nbrpower(float nbr, int power)
{
	float n;

	n = 1;
	while (power)
	{
		n *= nbr;
		power--;
	}
	return (n);
}
