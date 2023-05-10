/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 22:47:32 by pemontei          #+#    #+#             */
/*   Updated: 2023/05/10 22:49:58 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include<unistd.h>
# include<stdio.h>
# include<stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int		ft_atoi(const char *str);

int		ft_tolower(int c);

int		ft_toupper(int c);

void	ft_bzero(void *str, size_t n);

void	*calloc(size_t nitems, size_t size);

void	*ft_memchr(const void *s, int c, size_t n);

int		memcmp(const void *str1, const void *str2, size_t n);

void	*ft_memmove(void *str1, const void *str2, size_t n);

void	*ft_memset(void *str, int c, size_t n);

char	*ft_strchr(const char *str, int c);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strcat(char *dest, const char *src);

char	*ft_strlcpy(char *dest, const char *src);

int		ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t n);

char	*ft_strrchr(const char *str, int c);

char	*ft_substr(char const *s, unsigned int start, size_t len);

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

/*Bonus Part*/

typedef struct s_list
{
	struct s_list	*next;
	void			*content;
}	t_list;

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif
