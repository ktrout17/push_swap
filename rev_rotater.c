/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotater.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 13:49:05 by kris              #+#    #+#             */
/*   Updated: 2020/05/15 12:21:42 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		move_down(t_list **stack)
{
	char	*last;

	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
		return;
	last = delete_last(stack);
	if (ft_strcmp(last, "Error") == 0)
		return;
	add_tohead(stack, ft_atoi(last));
	ft_strdel(&last);
}

void			rra(t_list **stack_a)
{
	move_down(stack_a);
}

void			rrb(t_list **stack_b)
{
	move_down(stack_b);
}

void			rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
