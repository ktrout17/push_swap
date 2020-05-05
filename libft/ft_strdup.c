/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:15:55 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/21 08:15:56 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Returns a pointer to a new string which is a duplicate of s. Memory for 
** the new string is obtained using malloc and can be freed with free.
*/

char	*ft_strdup(const char *s1)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(*new_str) * (ft_strlen(s1) + 1));
	if (new_str == NULL)
		return (NULL);
	return (ft_strcpy(new_str, s1));
}
