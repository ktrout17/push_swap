/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusher.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 08:27:41 by kris              #+#    #+#             */
/*   Updated: 2020/05/13 20:49:49 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void push(t_list **from, t_list **to)
{
	char *top;

	top = delete_first(from);
	if (ft_strcmp(top, "Error") == 0)
		return;
}
