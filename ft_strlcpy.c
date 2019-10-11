/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 02:22:09 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/11 18:11:37 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	unsigned int i;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < dstsize - 1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	dest[dstsize - 1] = '\0';
	while (src[i++] != '\0')
		;
	return (i - 1);
}
