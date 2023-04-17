/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:13:45 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/17 22:23:48 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	ft_strnstr(const char *big, const char *little, size_t len);
{
	int	i;
	int	j;
	char	*ptr;

	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			ptr = (char*)&big[i];
			j = 0;
			while (big[i] == little[j])
			{
				i++;
				j++;
			}
			return (ptr);
		}
		i++;
	}
	return (0);
}

int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;
   int len = 5;

   printf("The substring is: %c\n", ft_strnstr(haystack, needle, len));

   return(0);
}
