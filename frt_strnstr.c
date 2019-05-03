/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frt_strnstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:44:57 by rgaia             #+#    #+#             */
/*   Updated: 2019/05/02 18:40:53 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	while ((*str1 || *str2) && n--)
	{
		if (*str1 != *str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		str1++;
		str2++;
	}
	return (0);
}

/*
[old]char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		needle_length;

	needle_length = ft_strlen(needle);
	if (needle_length == 0)
		return ((char*)haystack);
	
	while (*haystack && needle_length <= len)
	{
		//if we seem to have found an Element that looks like needle[0]
		if (*needle == *haystack)
		{
			//is the rest of *needle contained where we first observed needle[0]
			//???
			//Check for that here in ft_strncmp:
			if (ft_strncmp(haystack, needle, needle_length) == 0)
				return ((char*)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}*/

int				fill_sum(int rolling_len, int *rolling_sum, char)
{
	while (rolling_len--)
	{
		*rolling_sum += hay[
	}
}


char			*frt_strnstr(const char *hay, char *need, size_t len)
{
	//perform addition adding largest index onto sum of strlen(need)
	// and subtracting element at lowest index for a "rolling-sum" algorithm
	int			left_most;
	int			right_most;
	short		need_len;
	intmax_t	rolling_sum;
	
	need_len = ft_strlen(need);
	left_most = ft_atoi(hay[--len]);
	right_most = ft_atoi();
	while (len--)
	{
		left_most = 
		rolling_sum += left_most + ;
	}
	return (ft_itoa(rolling_sum)):
}	
