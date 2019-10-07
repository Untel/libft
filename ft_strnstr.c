/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:11:02 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/07 18:40:40 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int j;
	int flen;

	if (!*to_find)
		return (str);
	i = 0;
	flen = ft_strlen(to_find);
	while (str[i] && (i + flen) < len + 1)
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
