/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezzahir <hezzahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 23:42:31 by hezzahir          #+#    #+#             */
/*   Updated: 2020/02/27 23:42:33 by hezzahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	res;
	int		e;
	double	sign;
	char	*s;

	s = (char*)str;
	res = 0;
	e = 0;
	while (*s == '\t' || *s == ' ' || *s == '\n')
		s++;
	sign = ft_sign(*s);
	if (*s == '+' || *s == '-')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + *s - 48;
		s++;
	}
	if (*s == '.')
		while (*s++ != '\0' && ft_isdigit(*s))
		{
			res = res * 10.0 + (*s - '0');
			e--;
		}
	return ((res * pow(10.0, e)) * sign);
}
