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

static char		**ft_split(char **split, const char *s, char c, unsigned int *j)
{
	int				i;
	unsigned int	len;
	unsigned int	start;

	i = 0;
	len = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i++] != c)
				len++;
			split[(*j)++] = ft_strsub(s, start, len);
			len = 0;
		}
		else
			i++;
	}
	return (split);
}

char			**ft_strsplit(char const *s, char c)
{
	char			**split;
	unsigned int	num_words;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	j = 0;
	num_words = ft_strnwords_split(s, c);
	if (!(split = (char**)malloc(sizeof(char*) * (num_words + 1))))
		return (NULL);
	split = ft_split(split, s, c, &j);
	split[j] = (char*)0;
	return (split);
}
