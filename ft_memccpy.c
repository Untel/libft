/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:34:58 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/21 17:08:13 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*tmp_dst;
	const char	*tmp_src;

	tmp_dst = dst;
	tmp_src = src;
	while (n-- > 0)
		if ((unsigned char)*tmp_src == (unsigned char)c)
		{
			*tmp_dst++ = *tmp_src++;
			return (tmp_dst);
		}
		else
			*tmp_dst++ = *tmp_src++;
	return (NULL);
}
