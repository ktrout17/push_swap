/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 12:07:08 by ktrout            #+#    #+#             */
/*   Updated: 2020/05/03 11:39:19 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes the address of a pointer on a link and frees the memory content of the 
** link with the function 'del'. The memory of the element next should never be
** freed. In order to terminate the link, the pointer on the current link should
** be put to NULL.
*/

void	ft_lstdelone(t_lst **alst, void (*del)(void*, size_t))
{
	if (del != NULL && *alst != NULL)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
