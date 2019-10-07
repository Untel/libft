/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 02:22:09 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/07 12:17:22 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break ;
		i++;
	}
	dest[size - 1] = '\0';
	while (src[i++] != '\0')
		;
	return (i - 1);
}
