/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:59:48 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/17 21:24:54 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    int i;
    
    i = 0;
    str = (void *)s;
    while (n > 0)
    {
        if (((unsigned char *)s)[i] == c)
        {
            return (&str[i]);
        }
        i++;
        n--;
    }
    return (NULL);
}
