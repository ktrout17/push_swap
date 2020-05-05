/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:57:24 by ktrout            #+#    #+#             */
/*   Updated: 2019/05/28 10:25:31 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Sets every character of the string to the value '\0'.
*/

void	ft_strclr(char *s)
{
	char *ptr;

	if (s != NULL)
	{
		ptr = s;
		while (*ptr != '\0')
			*(ptr++) = '\0';
	}
}
