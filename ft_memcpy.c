/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 13:09:40 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/07 13:29:48 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memcpy(void *dst, const void* src, size_t n)
{
	unsigned char *tmp_dst;
	const unsigned char *tmp_src;

	tmp_dst = dst;
	tmp_src = src;
	while (n-- > 0)
		*tmp_dst++ = *tmp_src++;
	return dst;
}