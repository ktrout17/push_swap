/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 11:22:26 by ktrout            #+#    #+#             */
/*   Updated: 2020/05/10 13:24:57 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates memory for, and returns a "fresh" linked list. The elements content
** and content_size within the new link will be copied from the parameters of
** the function. If the parameter content is NULL, the element content_size is
** initialized to 0 regardless of the parameter of the content_size. The element
** of next is initialized to NULL. If the memory allocation fails, it returns 
** NULL.
*/

t_lst	*ft_lstnew(void const *content, size_t content_size)
{
	t_lst *fresh;

	if (!(fresh = (t_lst *)malloc(sizeof(t_lst) * content_size)))
		return (NULL);
	if (content == NULL)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
	}
	else
	{
		if (!(fresh->content = (void *)malloc(content_size)))
			return (NULL);
		ft_memcpy(fresh->content, content, content_size);
		fresh->content_size = content_size;
	}
	fresh->next = NULL;
	return (fresh);
}
