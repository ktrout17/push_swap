/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 09:15:11 by kris              #+#    #+#             */
/*   Updated: 2020/05/15 12:26:43 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void pushbcmds_algo(t_list **stack_a, t_list *stack_b)
{
    ts_stack		*move;

	move = get_smallsteps(stack_a, stack_b);
	while (move->a_step > 0)
	{
		move->a_step = move->a_step - 1;
		move->all_step = move->all_step - 1;
		print(stack_a, stack_b, move->a_cmd);
	}
	while (move->b_step > 0)
	{
		move->b_step = move->b_step - 1;
		move->all_step = move->all_step - 1;
		print(stack_a, stack_b, move->b_cmd);
	}
	print(stack_a, stack_b, "pb");
	free(move->a_cmd);
	free(move->b_cmd);
	free(move);
}

static void pushb_algo(t_list **stack_a, t_list **stack_b)
{
	while (isempty(stack_a) == 0)
	{
		if (isempty(stack_b) == 1)
		{
			print(stack_a, stack_b, "pb");
			print(stack_a, stack_b, "pb");
		}
		else
			pushbcmds_algo(stack_a, stack_b);
	}
}

static void			pushtoa(t_list **stack_a, t_list **stack_b)
{
	int				data;
	int				steps;
	char			*cmd;

	if (issorted_desc(stack_b) == 0)
	{
		data = get_max(stack_b);
		steps = get_steps(stack_b, data);
		if (get_pos(stack_b, data) > get_midlen(listlen(stack_b)))
			cmd = "rrb";
		else
			cmd = "rb";
		while (steps > 0)
		{
			steps--;
			print(stack_a, stack_b, cmd);
		}
	}
	while (isempty(stack_b) == 0)
		print(stack_a, stack_b, "pa");
}

void        algo_stack(t_list **stack_a, t_list **stack_b)
{
    pushb_algo(stack_a, stack_b);
    pushtoa(stack_a, stack_b);
}