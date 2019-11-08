/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 10:06:17 by adda-sil          #+#    #+#             */
/*   Updated: 2019/11/08 16:42:57 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>

uint64_t	ft_pow(uint64_t nb, int power)
{
	if (power > 0)
		return (nb * ft_pow(nb, power - 1));
	else if (power == 0)
		return (1);
	else
		return (0);
}
