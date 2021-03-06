/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:58:45 by kris              #+#    #+#             */
/*   Updated: 2020/05/15 12:21:40 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			cmds(t_list **stack_a, t_list **stack_b, char *cmd)
{
	if (ft_strcmp(cmd, "sa") == 0)
		sa(stack_a);
	else if (ft_strcmp(cmd, "sb") == 0)
		sb(stack_b);
	else if (ft_strcmp(cmd, "ss") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(cmd, "pa") == 0)
		pa(stack_b, stack_a);
	else if (ft_strcmp(cmd, "pb") == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp(cmd, "ra") == 0)
		ra(stack_a);
	else if (ft_strcmp(cmd, "rb") == 0)
		rb(stack_b);
	else if (ft_strcmp(cmd, "rr") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(cmd, "rra") == 0)
		rra(stack_a);
	else if (ft_strcmp(cmd, "rrb") == 0)
		rrb(stack_b);
	else if (ft_strcmp(cmd, "rrr") == 0)
		rrr(stack_a, stack_b);
	else
		return (-1);
	return (2);
}

void		print(t_list **stack_a, t_list **stack_b, char *cmd)
{
	if (cmds(stack_a, stack_b, cmd) == 2)
		ft_putendl(cmd);
}
