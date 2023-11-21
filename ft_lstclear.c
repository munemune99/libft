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

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	temp = *lst;
	if (*lst != NULL)
	{
		while (temp->next != NULL)
		{
			temp2 = temp->next;
			del(temp->content);
			free(temp);
			temp = temp2;
		}
		del(temp->content);
		free(temp);
		*lst = NULL;
	}
}

/*
int main(void)
{
    ft_lstclear(NULL, &free);
    return (0);
}
*/