/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <vpluchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 00:10:07 by vpluchar          #+#    #+#             */
/*   Updated: 2017/10/31 20:35:56 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <wchar.h>

# define BUFF_SIZE 32
# define CHAR '\n'

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
**	Display
*/

void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putstr(char const *s);
void				ft_putwchar(wchar_t wc);
void				ft_putwcs(wchar_t *wcs);
int					ft_gnl(const int fd, char **line);

/*
**	Int
*/

int					ft_isdigit(int c);
char				*ft_itoa(int n);

/*
**	List
*/

void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);

/*
**	Memory
*/

void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *s, int c, size_t len);

/*
**	Other
*/

int					ft_fibonacci(int index);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					*ft_range(int min, int max);
int					ft_sqrt(int nb);

/*
**	String
*/

int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);
int					ft_countwords(char const *str, char c);
int					ft_isprint(int c);
int					ft_isspace(int c);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
int					ft_strequ(char *s1, char *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlcpy(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);
char				*ft_strdup(const char *src);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, char *src, int nb);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strndup(const char *s, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
char				*ft_strnstr(const char *b, const char *l, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(char *str);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *b, const char *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(const char *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_wcslen(wchar_t *wcs);
size_t				ft_wcstombs(char *s, const wchar_t *ws, size_t n);
int					ft_wctomb(char *s, wchar_t wc);

#endif
