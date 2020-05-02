/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktrout <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:52:20 by ktrout            #+#    #+#             */
/*   Updated: 2019/06/11 14:55:24 by ktrout           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes the function f and applies it to every link in the linked list.
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *temp;

	if (lst != NULL && f != NULL)
	{
		temp = lst;
		while (temp != NULL)
		{
			f(temp);
			temp = temp->next;
		}
	}
}
