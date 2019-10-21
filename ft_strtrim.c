/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:24:41 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/21 18:39:34 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	int			startl;
	int			endl;

	if (!s1 || !set)
		return (NULL);
	startl = 0;
	endl = ft_strlen(s1) - 1;
	while ((s1[startl] && ft_strchr(set, s1[startl])))
		startl++;
	while ((s1[endl] && (endl >= startl) && ft_strchr(set, s1[endl])))
		endl--;
	endl = endl - startl + 1;
	return (ft_substr(s1, startl, endl > 0 ? endl : 0));
}
