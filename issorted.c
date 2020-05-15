/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 19:42:20 by krissyleemc       #+#    #+#             */
/*   Updated: 2020/05/15 12:21:40 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int         issorted(t_list **stack_a, t_list **stack_b)
{
    t_list  *curr;
    t_list  *next;

    if (isempty(stack_b) == 0)
        return (0);
    curr = *stack_a;
    next = (*stack_a)->next;
    if (curr == NULL)
        return (1);
    while (next)
    {
        if (curr->data > next->data)
            return (0);
        curr = next;
        next = curr->next;
    }
    return (1);
}

int         issorted_asc(t_list **stack_a)
{
	t_list		*curr;
	t_list		*next;

	curr = *stack_a;
	next = (*stack_a)->next;
	if (curr == NULL)
		return (1);
	while (next)
	{
		if (curr->data > next->data)
			return (0);
		curr = next;
		next = curr->next;
	}
	return (1);
}

int         issorted_desc(t_list **stack_b)
{
	t_list		*curr;
	t_list		*next;

	curr = *stack_b;
	next = (*stack_b)->next;
	if (curr == NULL)
		return (1);
	while (next)
	{
		if (curr->data < next->data)
			return (0);
		curr = next;
		next = curr->next;
	}
	return (1);
}

void        sorted(t_list **stack_a, t_list **stack_b)
{
	if (issorted(stack_a, stack_b) == 1)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}