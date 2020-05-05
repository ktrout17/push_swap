/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:14:24 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/05 12:25:44 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/*
** Outputs the string s to the standard output followed by a '\n'.
*/

void	ft_putendl(char const *s)
{
	ft_putstr((char *)s);
	write(1, "\n", 1);
}
