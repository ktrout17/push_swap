/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:51:24 by ktrout            #+#    #+#             */
/*   Updated: 2020/05/11 12:55:08 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates with malloc and returns a copy of the string given as argument
** without whitespaces at the beginning or at the end of the string. The
** following characters: ' ', '\n' and '\t' will be considered as whitespaces.
** If s has no whitespaces at the beginning or at the end, the function returns
** a copy of s. If the allocation fails, the function returns NULL.
*/

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	len;
	char	*newstr;

	start = 0;
	if (s == NULL)
		return (NULL);
	while ((s[start] == ' ' || s[start] == '\t' || s[start] == '\n') &&
			s[start] != '\0')
		start++;
	len = ft_strlen(s);
	while ((s[len - 1] == ' ' || s[len - 1] == '\n' || s[len - 1] == '\t')
			&& s[start] != '\0')
		len--;
	newstr = ft_strsub(s, start, (len - start));
	if (newstr)
		return (newstr);
	return (NULL);
}
