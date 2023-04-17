/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 20:51:53 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/13 20:53:21 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int	ft_isalnum(int c);

int	ft_isalpha(int c);

int	ft_isascii(int c);

int	ft_isdigit(int c);

int	ft_isprint(int c);

int	ft_tolower(int c);

int	ft_toupper(int c);

size_t	ft_strlen(const char *str);

void	ft_bzero(void *str, size_t n);

char	*ft_strchr(const char *str, int c);

char	*ft_strrchr(const char *str, int c);

void	*ft_memset(void *str, int c, size_t n);

char	*ft_strcat(char *dest, const char *src);

char	*ft_strlcpy(char *dest, const char *src);

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	ft_strnstr(const char *big, const char *little, size_t len);

#endif
