/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:01:42 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/28 09:52:03 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Allocates with malloc and returns a "fresh" string ending with '\0'. Each
** character of the string is initialized at '\0'. If the allocation fails,
** the function returns NULL.
*/

char	*ft_strnew(size_t size)
{
	char *str;
	char *ptr;

	str = (char *)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ptr = str;
	while (size != '\0')
	{
		*ptr++ = '\0';
		size--;
	}
	*ptr = '\0';
	return (str);
}
