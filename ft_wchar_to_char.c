/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wchar_to_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 22:35:40 by adda-sil          #+#    #+#             */
/*   Updated: 2019/11/12 19:48:55 by adda-sil         ###   ########.fr       */
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
		if (!(mask <<= 1))
			return (sizeof(wchar_t));
	return (ret);
}

static int
	ft_is_restricted_range(unsigned char *octets, int noct)
{
	if (noct == 3)
	{
		if (octets[0] == 0b11100000 && (octets[1] & 0b11100000) != 0b10100000)
			return (1);
		if (octets[0] == 0b11101101 && (octets[1] & 0b11100000) != 0b10000000)
			return (1);
	}
	if (noct == 4)
	{
		if (octets[0] == 0b11110000 && (octets[1] & 0b11110000) != 0b10010000)
			return (1);
		if (octets[0] == 0b11110000 && (octets[1] & 0b11100000) != 0b10100000)
			return (1);
		if (octets[0] == 0b11110100 && (octets[1] & 0b11110000) != 0b10000000)
			return (1);
	}
	return (0);
}

int
	ft_wchar_to_char(char *buff, wchar_t code)
{
	static unsigned char	masks[3][4] = {
		{ 7, 5, 4, 3 },
		{ 0b01111111, 0b00011111, 0b00001111, 0b00000111 },
		{ 0b00000000, 0b11000000, 0b11100000, 0b11110000 }
	};
	int						bits;
	int						i;
	unsigned char			wchar[5];

	bits = ft_count_bits(code);
	if (!buff || bits > 21 || code < 0 || code > 0x10FFFF)
		return (-1);
	i = -1;
	wchar[4] = 0;
	while (bits > masks[0][++i])
	{
		wchar[3 - i] = (unsigned char)((code & 0b00111111) | 0b10000000);
		code >>= 6;
		bits -= 6;
	}
	wchar[3 - i] = (unsigned char)((code & masks[1][i]) | masks[2][i]);
	if (ft_is_restricted_range(&wchar[3 - i], i + 1))
		return (-1);
	ft_strcpy(buff, (char *)&wchar[3 - i]);
	return (i + 1);
}

int
	ft_wchars_to_str(char *buff, wchar_t *codes)
{
	int len;
	int	ret;

	len = 0;
	while (*codes && ((ret = ft_wchar_to_char(&buff[len], *codes++)) > -1))
		len += ret;
	return (ret > -1 ? len : ret);
}
