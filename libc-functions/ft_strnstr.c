/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 21:13:45 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/12 21:48:18 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	char	*ptr;

	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			ptr = (char*)&haystack[i];
			j = 0;
			while (haystack[i] == needle[j])
			{
				i++;
				j++;
			}
			return (&ptr);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
