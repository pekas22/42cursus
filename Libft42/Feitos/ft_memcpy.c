/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:36:22 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/17 19:45:16 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	while (n > 0)
	{
		((unsigned char*)dest)[n-1] = ((unsigned char*)src)[n-1];
		n--;
	}
	return (dest);
}
