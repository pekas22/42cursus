/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:27:56 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/17 21:42:36 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	memcmp(const void *str1, const void *str2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (((const char *)str1)[i] != ((const char *)str2)[i])
		{
			return ((((const char *)str1)[i]) - (((const char *)str2)[i]));
		}
		i++;
	}
	return (0);
}
/*

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/
