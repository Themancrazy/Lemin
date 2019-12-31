/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alex <Alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:03:58 by ale-goff          #+#    #+#             */
/*   Updated: 2018/12/09 04:36:01 by Alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# define BUFF_SIZE 4096

typedef struct		s_node
{
    void			*content;
    struct s_node	*next;
}					t_node;
typedef struct		s_stack
{
    struct s_node	*top;
}					t_stack;

typedef struct      s_nodes
{
    char            *data;
    struct s_nodes  *next;
}                   t_nodes;

typedef struct      s_list
{
    t_nodes         *head;
    t_nodes         *tail;
    int             size;
}                   t_list;

char    			*ft_strcdup(const char *s1, int c);
size_t          	ft_clength(char *str, int c);
char				*ft_strccpy(char *dst, char *str, int c);
t_stack				*init_stack(void);
void				*pop(t_stack *stack);
void				push(t_stack *stack, void *content);
int					is_empty(t_stack *stack);
void				*peek(t_stack *stack);
void				ft_freemap(char **arr, int x);
char				*ft_strrev(char *str);
void				ft_putoctal(unsigned int n);
int					get_next_line(int fd, char **line);
void				ft_putunsigned(unsigned int n);
void				ft_puthex(unsigned long n);
int					ft_sqrt(int nb);
int					ft_isascii(int c);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strdup(const char *s1);
int					ft_isdigit(int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
size_t				ft_strlen(const char *str);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_bzero(void *s, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strnew(size_t size);
int					ft_isprint(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
char				*ft_itoa_base(int value, int base);
int					ft_atoi(const char *str);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncat(char *dest, const char *src, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				ft_memdel(void **ap);
void				*ft_memalloc(int size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);
int					ft_count_digits(int nb);
int                 ft_atoi_validate(char *str, int *val);
int					ft_isnum(char *s);
int					ft_isspace(int c);

#endif
