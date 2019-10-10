/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:24:41 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/10 11:56:04 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		startl;
	size_t		endl;

	startl = 0;
	endl = ft_strlen(s1) - 1;
	while ((s1[startl] && strchr(set, s1[startl])))
		startl++;
	while ((s1[endl] && strchr(set, s1[endl])))
		endl--;
	return (ft_substr(s1, startl, (endl - startl + 1)));
}
