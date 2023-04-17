/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:34:11 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/17 20:53:48 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	int	i;
	
	i = 0;
	if (!str1 && !str2)
	{
		return(0);
	}
	if (str1 > str2)
	{
		while ( n > 0)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i++;
		}
		return (str1);
	}
	else
	{
		ft_memcpy(str1, str2, n);
	}
	return (0);
}

/*int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/
