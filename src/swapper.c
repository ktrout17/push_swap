/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:24:54 by kris              #+#    #+#             */
/*   Updated: 2020/05/14 19:40:02 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void swap(t_list **stack)
{
	t_list *head;
	t_list *next;
	int temp;

	head = *stack;
	if (head == NULL)
		return;
	next = head->next;
	if (next == NULL)
		return;
	temp = head->data;
	head->data = next->data;
	next->data = temp;
}

void sa(t_list **stack_a)
{
	swap(stack_a);
}

void sb(t_list **stack_b)
{
	swap(stack_b);
}

void ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
