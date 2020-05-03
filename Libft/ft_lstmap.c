/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:27:12 by ktrout            #+#    #+#             */
/*   Updated: 2020/05/03 11:39:56 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes the list of lst and applies to each link the function f, then creates
** and returns a "fresh" list. This results in successive applications of the
** function recursively until the end of the list is reached and the 
** new list is returned/
*/

t_lst	*ft_lstmap(t_lst *lst, t_lst *(*f)(t_lst *elem))
{
	t_lst *head;
	t_lst *current;

	if (lst == NULL || f == NULL)
		return (NULL);
	head = f(lst);
	if (head == NULL)
		return (NULL);
	current = head;
	while (lst->next != NULL)
	{
		lst = lst->next;
		current->next = f(lst);
		if (current->next == NULL)
			return (NULL);
		current = current->next;
	}
	return (head);
}
