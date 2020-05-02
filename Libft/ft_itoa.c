/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:53:36 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/14 08:39:40 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Allocates with malloc and returns a "fresh" string ending with '\0' 
** representing the integer n given as argument. Negative numbers must be
** supported. If the allocation fails, the function returns NULL.
*/

/* 
** Checks if minimum int is -2147483648 (lowest possible int) and returns it in
** char form if it is.
*/
static char		*check_min_int(char *minint)
{
	int		i;
	char	*min;

	i = 0;
	min = ft_strnew(11);
	while (i < 11)
	{
		min[i] = minint[i];
		i++;
	}
	return (min);
}

char			*ft_itoa(int n)
{
	size_t		len;
	char		*res;

	if (n == -2147483648)
		return (check_min_int("-2147483648"));
	len = ft_itoa_len(n);
	if (!(res = (char *)malloc(len + 1)))
		return (NULL);
	res[len--] = '\0';
	if (n == 0)
	{
		res[0] = '0';
		return (res);
	}
	if (n < 0)
		res[0] = '-';
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		res[len] = '0' + (n % 10);
		n = n / 10;
		len--;
	}
	return (res);
}
