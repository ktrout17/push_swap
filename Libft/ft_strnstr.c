/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:06:50 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/27 10:53:08 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Locates the first occurence of the null-terminated string needle in the 
** string haystack, where not more than len characters are searched. Characters
** that appear after a '\0' character are not searched. If needle is an empty 
** string, haystack is returned. If needle occurs nowhere in haystack, NULL is
** returned, otherwise a pointer to the first character of the first occurrence
** of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while ((needle[j] != '\0') && (haystack[i + j] == needle[j]) \
					&& ((i + j) < len))
				++j;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		++i;
	}
	return (0);
}
