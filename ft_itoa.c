/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:08:30 by adda-sil          #+#    #+#             */
/*   Updated: 2019/11/06 21:42:06 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_itoa(int n)
{
	int		length;
	int		nt;
	char	*str;

	if (n < 0 && n == -2147483648)
		return (ft_strdup("-2147483648"));
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
