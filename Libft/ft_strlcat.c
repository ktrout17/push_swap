/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:11:54 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/27 10:57:13 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Appends src to dst and wil append at most dstsize -strlen(dst) - 1 bytes, 
** NULL-terminating the result. Function returns the initial length of dst plus
** the length of src.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = 0;
	while ((dst[len] != '\0') && len < dstsize)
		len++;
	i = len;
	while ((src[len - i] != '\0') && (len + 1 < dstsize))
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < dstsize)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
