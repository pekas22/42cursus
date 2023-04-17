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

/*#include <stddef.h>

void *memchr(const void *str, int c, size_t n)
{
	int	i;
	unsigned char	*string;

	i = 0;
	string = (unsigned char *)str;
	while (string[i] && i < n)
	{
		if (string[i] == c)
		{
			return (void *)(string + i);
		}
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/
