/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfrancoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:05:02 by jfrancoi          #+#    #+#             */
/*   Updated: 2023/11/13 16:41:06 by jfrancoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*elem;
	t_list	*point;
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	elem = NULL;
	while (lst != NULL)
	{
		temp = (f(lst->content));
		point = ft_lstnew(temp);
		if (point == NULL)
		{
			ft_lstclear(&elem, del);
			del(temp);
			free(point);
			return (NULL);
		}
		ft_lstadd_back(&elem, point);
		lst = lst->next;
	}
	return (elem);
}
