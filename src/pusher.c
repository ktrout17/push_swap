/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pusher.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 08:27:41 by kris              #+#    #+#             */
/*   Updated: 2020/05/14 19:40:21 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void push(t_list **from, t_list **to)
{
	char *top;

	top = delete_first(from);
	if (ft_strcmp(top, "Error") == 0)
		return;
	add_tohead(to, ft_atoi(top));
	ft_strdel(&top);
}

void pa(t_list **stack_b, t_list **stack_a)
{
	push(stack_b, stack_a);
}

void pb(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
}
