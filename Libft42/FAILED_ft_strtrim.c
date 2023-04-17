/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pemontei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 21:20:01 by pemontei          #+#    #+#             */
/*   Updated: 2023/04/13 22:48:50 by pemontei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"libft.h"

int	ft_pos_i(char const *s1, char const *set)
{
	int	i;
	int	j;
	
	i = 0;
	while (s1[i])
	{
		if (s1[i] == set[0])
		{
			j = 0;
			while (s1[i] == set[j])
			{
				i++;
				j++;
			}
			return (i);
		}
		i++;
	}
	return (0);
}

int	ft_pos_f(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	while(i > 0)
	{
		if (s1[i] == set[0])
		{
			j = 0;
			while (s1[i] == set[j])
			{
				i++;
				j++;
			}
			return(i);
		}
		i--;
	}
	return (0);
}

/*int main()
{
	const char haystack[20] = "TutorialsPutoint";
	const char needle[10] = "ut";

	printf("%d", ft_pos_i(haystack,needle));

	printf("%d", ft_pos_f(haystack,needle));
}*/
