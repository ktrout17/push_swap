/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:13 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/07 10:47:02 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Lexicographical comparison between s1 & s2 up to n characters or until a '\0'
** is reached. If the two strings are identical, the function returns 1, or
** 0 otherwise.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*str1;
	char	*str2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (0);
		str1++;
		str2++;
	}
	return (1);
}
