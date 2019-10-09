/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:22:44 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/09 16:40:12 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	char *mal;

	if (!(mal = malloc(count * size)))
		return (NULL);
	while (--size >= 0)
		mal[size] = 0;
	return ((void *)mal);
}
