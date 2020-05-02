/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:27:12 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/12 07:56:23 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes the list of lst and applies to each link the function f, then creates
** and returns a "fresh" list. This results in successive applications of the
** function recursively until the end of the list is reached and the 
** new list is returned/
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *current;

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
