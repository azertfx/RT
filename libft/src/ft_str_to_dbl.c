/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_dbl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezzahir <hezzahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:50:37 by hezzahir          #+#    #+#             */
/*   Updated: 2020/02/28 22:50:38 by hezzahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_str_to_dbl(char *str)
{
	if (!str || (str[0] != '(') || (str[ft_strlen(str) - 1] != ')'))
		return (-1);
	str++;
	str[ft_strlen(str) - 1] = '\0';
	return (ft_atof(str));
}
