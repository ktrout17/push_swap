/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:29:00 by ktrout            #+#    #+#             */
/*   Updated: 2020/05/04 08:22:32 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Adds a new link (called "new") to a list and places this link at the head of
** the list.
*/

void	ft_lstadd(t_lst **alst, t_lst *new)
{
	new->next = *alst;
	*alst = new;
}
