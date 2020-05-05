/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:52:20 by ktrout            #+#    #+#             */
/*   Updated: 2020/05/03 11:39:34 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes the function f and applies it to every link in the linked list.
*/

void	ft_lstiter(t_lst *lst, void (*f)(t_lst *elem))
{
	t_lst *temp;

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
