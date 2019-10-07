/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:45:14 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/07 18:26:37 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
unsigned	ft_strlen(const char *str);
int			ft_isalpha(unsigned char c);
int         ft_isupper(unsigned char c);
int         ft_islower(unsigned char c);
int         ft_isdigit(unsigned char c);
int         ft_isalnum(unsigned char c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int         ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char        *ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, unsigned int n);
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
#endif
