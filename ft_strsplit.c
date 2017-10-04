/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 20:43:15 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 23:34:29 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	char			**split;
	char			*start;
	char			**ret;

	if (!s || !c)
		return (NULL);
	start = (char*)s;
	if (!(split = (char**)malloc(sizeof(char*) *
					((ft_strnwords_split(s, c)) + 1))))
		return (NULL);
	ret = split;
	while (*s)
	{
		if (*s == c)
		{
			if (start != s)
				*(split++) = ft_strsub(start, 0, s - start);
			start = (char*)s + 1;
		}
		++s;
	}
	if (start != s)
		*(split++) = ft_strsub(start, 0, s - start);
	*split = NULL;
	return (ret);
}
