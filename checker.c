/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:45:07 by kris              #+#    #+#             */
/*   Updated: 2020/05/02 17:45:59 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		inst(t_list **stack_a, t_list **stack_b)
{
	char	*line;
	int		gnl;

	line = NULL;
	gnl = get_next_line(0, &line);
	while (gnl != 0)
	{
		if (cmds(stack_a, stack_b, line) == -1)
		{
			free_stack(*stack_a);
			free_stack(*stack_b);
			ft_putstr("Error\n");
			return (-1);
		}
		gnl = get_next_line(0, &line);
	}
	return (2);
}

int				main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		if (get_listargs(&stack_a, argv, argc) == -1)
			return (-1);
		if (isdup(&stack_a) == 1)
			return (-1);
		if (inst(&stack_a, &stack_b) == -1)
			return (-1);
		sorted(&stack_a, &stack_b);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	return (0);
}
