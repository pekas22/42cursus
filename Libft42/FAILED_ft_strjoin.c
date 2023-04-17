/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 22:00:46 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/13 21:19:23 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>
#include<stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int	i;
	int	j;

	i = 0;
	j = 0;
	joined = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joined)
		return (0);
	while (s1[i])
	{
		joined[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		joined[j] = s2[i];
		i++;
		j++;
	}
	joined[j] = '\0';
	return (joined);
}
/*int main()
{
	char s1[] = "Oh Rita";
	char s2[] = "PoCaralho";

	printf("%s",ft_strjoin(s1,s2));
}*/
