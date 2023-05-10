/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:27:56 by pemontei          #+#    #+#             */
/*   Updated: 2023/05/10 21:52:26 by pemontei         ###   ########.fr       */
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
