/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_to_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 22:35:40 by adda-sil          #+#    #+#             */
/*   Updated: 2019/11/12 00:03:32 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include "libft.h"

static size_t
	ft_count_bits(wchar_t val)
{
	size_t	ret;
	wchar_t	mask;

	ret = 0;
	mask = 1;
	if (val < 2)
		return (1);
	while (val >= mask && ++ret)
	{
		mask <<= 1;
		if (!mask)
			return (1 * sizeof(wchar_t));
	}
	return (ret);
}

int
	ft_wchar_to_char(char *buff, wchar_t code)
{
	static int		masks[3][4] = {
		{ 7, 5, 4, 3 }, { 127, 31, 15, 7 }, { 0, 192, 224, 240 }
	};
	int				bits;
	int				i;
	unsigned char	wchar[5];

	bits = ft_count_bits(code);
	if (!buff || bits > 21 || code < 0 || code > 0x10FFFF)
		return (-1);
	i = -1;
	wchar[4] = 0;
	while (bits > masks[0][++i])
	{
		wchar[3 - i] = (unsigned char)((code & 63) | 128);
		code >>= 6;
		bits -= 6;
	}
	if ((3 - i) < 0)
		return (-1);
	wchar[3 - i] = (unsigned char)((code & masks[1][i]) | masks[2][i]);
	ft_strcpy(buff, (char *)&wchar[3 - i]);
	return (i + 1);
}

int
	ft_wchars_to_str(char *buff, wchar_t *codes)
{
	int len;
	int	ret;

	len = 0;
	while (*codes && ((ret = ft_wchar_to_char(buff, *codes++)) > -1))
		len += ret;
	return (ret > -1 ? len : ret);
}
