/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:55:09 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/11 16:15:11 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int even_case(unsigned int idx, char c)
{
	return (idx % 2 ? ft_tolower(c) : ft_toupper(c));
}

void	print_lst(int idx, void *lst)
{
	while ()
	printf("Node %d : %s\n", idx, lst);
}

int	test_lstnew()
{
	t_list *node = ft_lstnew("One");
	ft_lstiter(node, print_lst);
}

void test(char* name, int res)
{
	printf("--- test %s ---\n", name);
	printf(res ? "ok" : "XXXXXXXX NO XXXXXXXX");
	printf("\n--------------------\n");
}

int main()
{
	test("test_lstnew", test_lstnew());
	return (0);
}
