/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotater.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:17:39 by kris              #+#    #+#             */
/*   Updated: 2020/05/15 12:21:42 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		move_up(t_list **stack)
{
	char	*first;

	first = NULL;
	if (*stack == NULL)
		return;
	if ((*stack)->next == NULL)
		return;
	first = delete_first(stack);
	if (ft_strcmp(first, "Error") == 0)
		return;
	add_totail(stack, ft_atoi(first));
	ft_strdel(&first);
}

void			ra(t_list **stack_a)
{
	move_up(stack_a);
}

void			rb(t_list **stack_b)
{
	move_up(stack_b);
}

void			rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
