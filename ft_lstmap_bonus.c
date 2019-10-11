/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:02:01 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/11 19:44:26 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
	t_list *first;
	t_list *node;

	if (!(first = malloc(sizeof(t_list))))
		return (NULL);
	first->content = f(lst->content);
	node = first;
	while ((lst = lst->next))
	{
		if (!(node->next = malloc(sizeof(t_list))))
			return (NULL);
		node = node->next;
		node->content = f(lst->content);
	}
	node->next = NULL;
	return (first);
}
