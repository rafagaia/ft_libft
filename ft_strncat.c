/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 17:43:54 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 21:54:03 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char		*str1;

	str1 = s1;
	while (*str1)
		str1++;
	while ((n-- > 0) && *s2)
		*(str1++) = (char)*(s2++);
	*str1 = '\0';
	return (s1);
}
