/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:35:59 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/23 13:31:17 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies len bytes from src to dst, the strings may overlap. It returns the
** original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *temp;

	temp = (char *)malloc(sizeof(char) * len);
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, src, len);
	ft_memcpy(dst, temp, len);
	free(temp);
	return (dst);
}
