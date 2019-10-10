/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:35:23 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/10 17:35:33 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
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
