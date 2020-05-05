/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:13:39 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/05 09:20:40 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Allocates with malloc and returns a "fresh" string ending with '\0', result
** of the concatenation of s1 and s2. If the allocation fails, the function
** returns NULL.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;

	newstr = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		newstr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
					+ 1));
		if (newstr == NULL)
			return (NULL);
		ft_strcpy(newstr, s1);
		ft_strcat(newstr, s2);
	}
	return (newstr);
}
