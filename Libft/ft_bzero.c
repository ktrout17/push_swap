/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:41:29 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/11 15:46:12 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Erases the data in the n bytes of the memory starting at the location pointed
** to by s, by writing zeroes (bytes containing '\0') to that area. If n is zero,
** function does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		(((char *)s)[i]) = 0;
		i++;
	}
}
