/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 16:37:52 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/22 12:54:55 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char *b;
	char *l;
	char *save_b;

	b = (char *)big;
	l = (char *)little;
	save_b = b;
	if (ft_strlen(little) == 0)
		return (b);
	while (*save_b && len--)
	{
		if (*b == *l)
		{
			l++;
			if (*l == '\0')
				return (b - ft_strlen(little) + 1);
		}
		else
		{
			l = (char *)little;
			b = save_b++;
		}
		b++;
	}
	return (NULL);
}
