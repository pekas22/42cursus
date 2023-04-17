/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:45:40 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/17 20:30:38 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	int	i;

	i = 0;
	while (n > 0 && ((unsigned char *)src)[i] != c)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		n--;
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!";
    char dest[20];
    char *ptr;

    // copy the source string to the destination buffer until ',' is found
    ptr = memccpy(dest, src, ',', sizeof(src));
    if (ptr) {
        printf("Substring found: '%s'\n", dest);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}*/
