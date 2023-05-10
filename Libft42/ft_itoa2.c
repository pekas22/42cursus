/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:29:38 by pemontei          #+#    #+#             */
/*   Updated: 2023/05/10 22:35:35 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_size(unsigned int n)
{
	int	i;

	i = 1;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	number;
	char			*res;
	int				size;

	if (n < 0)
		number = -n;
	else
		number = n;
	size = number_size(number);
	if (n < 0)
		size++;
	res = (char *)malloc(size + 1);
	if (!res)
		return (NULL);
	if (n < 0)
		res[0] = '-';
	res[size] = '\0';
	while (size > 0 && res[size - 1] != '-')
	{
		res[size - 1] = number % 10 + '0';
		number /= 10;
		size--;
	}
	return (res);
}
