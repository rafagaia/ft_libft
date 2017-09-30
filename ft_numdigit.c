/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 08:27:57 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 01:37:31 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numdigit(int c)
{
	int n;

	n = 0;
	if (c == 0)
		return (1);
	while (c != 0)
	{
		c = c / 10;
		n++;
	}
	return (n);
}
