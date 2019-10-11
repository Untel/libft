/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:34:58 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/11 17:38:05 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*tmp_dst;
	const unsigned char	*tmp_src;

	tmp_dst = dst;
	tmp_src = src;
	while (n-- > 0)
		if (*tmp_src == c)
			return (tmp_dst + 1);
		else
			*tmp_dst++ = *tmp_src++;
	return (dst);
}
