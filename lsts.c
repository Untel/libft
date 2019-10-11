/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsts.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:55:09 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/11 19:48:49 by adda-sil         ###   ########.fr       */
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

int	test_lstnew()
{
	// t_list *one = ft_lstnew("One");
	// t_list *two = ft_lstnew("Two");
	// t_list *three = ft_lstnew("Three");
	// ft_lstadd_back(&one, two);
	// ft_lstadd_back(&one, three);
	// ft_lstprint(one);
	return (1);
}


int	test_lstmap()
{
	t_list *one = ft_lstnew("One");
	t_list *two = ft_lstnew("Two");
	t_list *three = ft_lstnew("Three");
	ft_lstadd_back(&one, two);
	ft_lstadd_back(&one, three);
	ft_lstprint(one, "Before mapping");
	t_list *new = ft_lstmap(one, (void *(*)(void *))ft_upcase);
	ft_lstprint(new, "After mapping new");
	return (1);
}

int	test_lstlast()
{
	t_list *one = ft_lstnew("One");
	t_list *two = ft_lstnew("Two");
	t_list *three = ft_lstnew("Three");
	ft_lstprint(one, "Before mapping");
	ft_lstprint(ft_lstlast(one), "Show last");
	return (1);
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
	test("test_lstmap", test_lstmap());
	return (0);
}
