/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:31:38 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/05 09:40:52 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Lexicographical comparison between s1 & s2. If the two strings are identical,
** the function returns 1, or 0 otherwise.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;

	if (s1 != NULL && s2 != NULL)
	{
		str1 = (char *)s1;
		str2 = (char *)s2;
		if ((ft_strlen(s1) > ft_strlen(s2)) || ft_strlen(s2) > ft_strlen(s1))
			return (0);
		while (*str1 != '\0')
		{
			if (*str1 != *str2)
				return (0);
			str1++;
			str2++;
		}
		return (1);
	}
	return (0);
}
