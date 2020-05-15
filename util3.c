/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 12:30:21 by kris              #+#    #+#             */
/*   Updated: 2020/05/15 12:30:58 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list		*new_node(void)
{
	t_list	*node;
	node = malloc(sizeof(t_list));
	return (node);
}

void		*init_node(t_list *node, int data, t_list *next)
{
	node->data = data;
	node->next = next;
}

void		add_tohead(t_list **stack, int data)
{
	t_list	*node_new;

	node_new = new_node();
	init_node(node_new, data, *stack);
	*stack = node_new;
}

void		add_totail(t_list **stack, int data)
{
	t_list	*curr;

	curr = *stack;
	while (curr->next != NULL)
		curr = curr->next;
	curr->next = new_node();
	init_node(curr->next, data, NULL);
}