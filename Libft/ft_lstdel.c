/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:40:14 by ktrout            #+#    #+#             */
/*   Updated: 2020/05/03 11:39:09 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter the address of a pointer on a link and frees the memory
** of this link and all of the links following one after another using the 
** function del. In order to terminate the link, the pointer on the first link,
** once freed, should be set to NULL.
*/

void	ft_lstdel(t_lst **alst, void (*del)(void *, size_t))
{
	t_lst *next;
	t_lst *temp;

	if (del != NULL && *alst != NULL)
	{
		temp = *alst;
		while (temp != NULL)
		{
			next = temp->next;
			(*del)(temp->content, temp->content_size);
			free(temp);
			temp = next;
		}
		*alst = NULL;
	}
}
