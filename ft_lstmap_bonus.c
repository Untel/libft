/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:02:01 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/10 17:12:31 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *first;
	t_list *node;

	if (!(first = malloc(sizeof(t_list))))
		return (NULL);
	first = f(lst->content);
	node = first;
	while ((lst = lst->next))
	{
		if (!(node->next = malloc(sizeof(t_list))))
			return (NULL);
		node->next = f(lst->content);
	}
	return (first);
}
