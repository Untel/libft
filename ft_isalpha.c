/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:32:42 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/21 18:24:19 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_isalpha(int c)
{
	return (ft_islower(c)
		|| ft_isupper(c));
}
