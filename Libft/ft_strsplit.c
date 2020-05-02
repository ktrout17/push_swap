/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:22:29 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/18 13:40:59 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
** Allocates with malloc and returns an array of "fresh" strings (all ending
** with '\0', including the array itself) obtained by spliting s using the 
** character c as delimeter. If the allocation fails, the function returns NULL.
** Example: ft_strsplit("*hello*fellow***students*", '*') returns the array
** ["hello", "fellow", "students"].
*/

static int		mystrlen(char const *str, char delim, int index)
{
	int		len;

	len = 0;
	while (str[index] == delim)
		index++;
	while (str[index] != delim && str[index] != '\0')
	{
		index++;
		len++;
	}
	return (len);
}

char			**ft_strsplit(char const *str, char c)
{
	int		i;
	int		j;
	char	**nstr;
	int		k;

	if (!str || !c)
		return (NULL);
	if (!(nstr = (char**)malloc(sizeof(*nstr) * (count_words(str, c, 0) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (i < count_words(str, c, 0))
	{
		k = 0;
		if (!(nstr[i] = ft_strnew(mystrlen(str, c, j))))
			return (NULL);
		while (str[j] == c)
			j++;
		while (str[j] != c && str[j] != '\0')
			nstr[i][k++] = str[j++];
		nstr[i][k] = '\0';
		i++;
	}
	nstr[i] = 0;
	return (nstr);
}
