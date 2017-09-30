/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgaia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 13:37:06 by rgaia             #+#    #+#             */
/*   Updated: 2017/09/29 23:54:34 by rgaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	
	if (lst == NULL)
		return (NULL);
	new_lst = ft_lstnew(NULL, 0);
	while (lst)
	{
		ft_lstadd(&new_lst, f(lst));
		lst = lst->next;
	}
	return (new_lst);
}
