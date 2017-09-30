/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 08:22:53 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 21:58:23 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define INT_MIN -(2^31)
#define INT_MAX ((2^31) - 1)

int		ft_atoi(const char *str)
{
	int		num;
	int		is_neg;
	char	*s;

	num = 0;
	is_neg = 1;
	s = (char *)str;
	while (*s < 27 || *s == ' ' ||
			*s == 127 || *s == '+')
		s++;
	if (*s == '-' && s++)
		is_neg = -1;
	while (*s)
	{
		if (*s <= '9' && *s >= '0')
		{
			num = (num * 10) + (*s - '0');
			s++;
		}
		else
			return (is_neg * num);
	}
	return (is_neg * num);
}
