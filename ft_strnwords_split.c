/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnwords_split.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 22:29:08 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 21:56:38 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** EXTRA:
** Returns number of words in string s, delimited by c
*/

size_t	ft_strnwords_split(const char *s, char c)
{
	size_t	num_words;
	int		i;

	i = 1;
	num_words = 0;
	if (s[0] == '\0')
		return (0);
	if (s[1] == '\0' && s[0] != c)
		return (1);
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			num_words++;
		i++;
	}
	return (num_words);
}
