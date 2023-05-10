/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 21:27:47 by pemontei          #+#    #+#             */
/*   Updated: 2023/05/10 22:02:46 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	count_words(char const *s, char c)
{
	int	i;
	int	counter;
	int	trigger;

	i = 0;
	counter = 0;
	trigger = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			trigger = 0;
		else if (s[i] != c && trigger == 0)
		{
			counter++;
			trigger = 1;
		}
		i++;
	}
	return (counter);
}
