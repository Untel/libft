/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:28:28 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/07 16:40:43 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memchr(const void *s, int c, size_t n)
{
	const unsigned char *tmp_s;

	tmp_s = s;
	while (n--)
		if (*tmp_s == c)
			return ((char *)tmp_s);
		else
			tmp_s++;
	return (!c ? (char *)tmp_s : 0);
}
