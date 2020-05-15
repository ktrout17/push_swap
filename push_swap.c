/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 12:23:56 by kris              #+#    #+#             */
/*   Updated: 2020/05/15 12:25:30 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     main(int argc, char **argv)
{
	t_list		*stack_a;
	t_list		*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		if (get_listargs(&stack_a, argv, argc) == -1)
			return (-1);
		if (isdup(&stack_a) == 1)
			return (-1);
		sort(&stack_a, &stack_b);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	return (0);
}