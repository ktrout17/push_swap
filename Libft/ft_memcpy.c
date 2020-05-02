/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:58:28 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/23 10:25:48 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from memory area src to memory area dst and returns the 
** original value of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;

	if (n == 0 || dst == src)
		return (dst);
	dest = (char *)dst;
	source = (const char *)src;
	while (n--)
		*dest++ = *source++;
	return (dst);
}
