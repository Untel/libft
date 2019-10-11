/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:59:16 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/10 19:38:53 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstprint(t_list *lst, void (*f)(void *))
{
	int i;

	i = 0;
	printf("--- %d nodes ---", ft_lstsize(lst));
	while (lst)
	{
		printf("| %d | %s |")
		lst = lst->next;
	}
	printf("-----------------")
}
