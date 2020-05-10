/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnewstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:20:42 by kris              #+#    #+#             */
/*   Updated: 2020/05/10 13:28:19 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_lstnewstr(char *content)
{
	t_lst   *fresh;
    int     i;
    char    *array;

	if (!(fresh = (t_lst *)malloc(sizeof(t_lst))))
		return (NULL);
	if (content == NULL)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
        fresh->next = NULL;
        return (fresh);
    }
    array = malloc(sizeof(char) * ft_strlen(content) + 1);
    i = 0;
    while (content[i]) {
        array[i] = content[i];
        i++;
    }
    array[1] = '\0';
    fresh->content = (void *)array;
    fresh->next = NULL;
    return (fresh);
}