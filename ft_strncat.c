/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 02:22:09 by adda-sil          #+#    #+#             */
/*   Updated: 2019/11/06 15:52:21 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, size_t nb)
{
	char			*dest_ptr;
	unsigned int	i;

	dest_ptr = dest;
	i = 0;
	while (*dest)
		dest++;
	while (i < nb && (*dest++ = *src++))
		i++;
	if (src[-1])
		*dest++ = '\0';
	return (dest_ptr);
}
