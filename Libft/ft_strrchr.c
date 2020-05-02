/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:37:43 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/28 07:36:51 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to the last occurence of the character c in the string s
** or NULL if the character is not found. The terminating null byte is 
** considered part of the string, so that if c is specified as '\0', the
** function returns a pointer to the terminator.
*/

char	*ft_strrchr(const char *s, int c)
{
	char *last;

	last = 0;
	while (*s != '\0')
	{
		if (*s == c)
			last = (char *)s;
		++s;
	}
	if (last != '\0')
		return (last);
	if (c == '\0')
		return ((char *)s);
	return (0);
}
