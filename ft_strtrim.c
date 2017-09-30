/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:25:33 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 21:57:14 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim_forward(char const *s)
{
	while (ft_iswhitespace(*s))
		s++;
	return ((char *)s);
}

static char	*trim_back(char const *s, char *front)
{
	while (ft_iswhitespace(*s) && s > front)
		s--;
	return ((char *)s);
}

char		*ft_strtrim(char const *s)
{
	char	*s_front;
	char	*s_back;
	char	*trim;
	int		i;

	if (s == NULL)
		return (NULL);
	if (!*s)
		return ((char *)s);
	if (ft_strblank(s))
		return ("");
	trim = NULL;
	i = 0;
	s_front = trim_forward(s);
	s_back = trim_back((s + ft_strlen(s) - 1), s_front);
	if (s_front <= s_back)
	{
		if ((trim = ft_strnew(s_back - s_front + 1)))
		{
			while (s_front <= s_back)
				trim[i++] = *s_front++;
		}
	}
	return (trim);
}
