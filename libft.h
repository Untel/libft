/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:45:14 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/20 16:23:46 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <ctype.h>

typedef	struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
int				ft_strlen(const char *str);
int				ft_atoi(char *str);
int				ft_isalpha(unsigned char c);
int				ft_isupper(unsigned char c);
int				ft_islower(unsigned char c);
int				ft_isupper(unsigned char c);
int				ft_isdigit(unsigned char c);
int				ft_isalnum(unsigned char c);
int				ft_isspace(char c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t			ft_strlcpy(char *dest, const char *src, size_t dstsize);
void			ft_bzero(void *s, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_upcase(const char *s);
char			*ft_lowcase(const char *s);
char			*ft_capitalize(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(const char *str, const char *to_find, size_t len);
char			*ft_strdup(char *src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_upcase(const char *str);
char			*ft_lowcase(const char *str);
char			*ft_capitalize(const char *str);
void			*ft_memset(void *b, int c, size_t len);
void			*ft_memmove(void *dst, void *src, size_t len);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_calloc(size_t count, size_t size);
char			**ft_split(char *str, char c);
char			**ft_split_charset(char *str, char *charset);
char			**ft_split_spaces(char *str);
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
int				ft_lstsize(t_list *lst);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstprint(t_list *lst, char *cmt);
void			ft_lstiter(t_list *lst, void (*f)(void *));
#endif