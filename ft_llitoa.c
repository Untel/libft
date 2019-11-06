/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:08:30 by adda-sil          #+#    #+#             */
/*   Updated: 2019/11/06 22:12:14 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_llitoa(int64_t n)
{
	size_t		length;
	int64_t		nt;
	char		*str;

	length = ft_intlen(n);
	nt = (n < 0 ? -n : n);
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	str += length;
	*str = 0;
	*--str = (nt % 10) + '0';
	while ((nt /= 10))
		*--str = (nt % 10) + '0';
	if (n < 0)
		*--str = '-';
	return (str);
}

char	*ft_lluitoa(uint64_t nt)
{
	size_t		length;
	char		*str;

	length = ft_intlen(nt);
	if (!(str = (char *)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	str += length;
	*str = 0;
	*--str = (nt % 10) + '0';
	while ((nt /= 10))
		*--str = (nt % 10) + '0';
	return (str);
}