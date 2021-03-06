/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_chars.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hezzahir <hezzahir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 00:23:31 by hezzahir          #+#    #+#             */
/*   Updated: 2020/02/27 23:46:25 by hezzahir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	empty(int n)
{
	(void)n;
	return (0);
}

char		*ft_skip_chars(const char *str, const char *compare, int (*f)(int))
{
	if (!f)
		f = empty;
	while (str && *str && (ft_strchr(compare, *str) || f(*str)))
		str++;
	return ((char *)str);
}

char		*ft_rskip_chars(const char *str, const char *cmp,
														int (*f)(int), int i)
{
	if (!f)
		f = empty;
	while (i >= 0 && (ft_strchr(cmp, str[i]) || f(str[i])))
		i--;
	if (i == -1)
		i = 0;
	return ((char *)(str + i));
}
