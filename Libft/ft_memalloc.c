/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:45:28 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/27 14:59:38 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Allocates with malloc and returns a "fresh" memory area. The memory allocated
** is initialized to 0. If the allocation fails, the function returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	char *mem;
	char *ptr;

	mem = (char *)malloc(size);
	if (mem == NULL)
		return (NULL);
	ptr = mem;
	while (size--)
		*ptr++ = 0;
	return (mem);
}
