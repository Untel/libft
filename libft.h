/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:45:14 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/09 15:58:46 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <ctype.h>
int			ft_strlen(const char *str);
int			ft_atoi(char *str);
int			ft_isalpha(unsigned char c);
int         ft_isupper(unsigned char c);
int         ft_islower(unsigned char c);
int         ft_isupper(unsigned char c);
int         ft_isdigit(unsigned char c);
int         ft_isalnum(unsigned char c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int         ft_tolower(int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_bzero(void *s, size_t n);
char		*ft_strchr(const char *s, int c);
char        *ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memmove(void *dst, void* src, size_t len);
void		*ft_memcpy(void *dst, const void* src, size_t n);
void		*ft_memccpy(void *dst, const void* src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);

#endif