/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remover.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 11:23:53 by kris              #+#    #+#             */
/*   Updated: 2020/05/10 13:47:12 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char *delete_first(t_list **stack)
{
	char *ret;
	t_list *next;

	ret = "Error";
	next = NULL;
	if (*stack == NULL)
		return (ret);
	next = (*stack)->data;
	ret = ft_itoa((*stack)->data);
	free(*stack);
	*stack = next;
	return (ret);
}

t_list *new_node(void)
{
	t_list *node;
	node = malloc(sizeof(t_list));
	return (node);
}

void *init_node(t_list *node, int data, t_list *next)
{
	node->data = data;
	node->next = next;
}

void add_tohead(t_list **stack, int data)
{
	t_list *node_new;

	node_new = new_node();
	init_node(node_new, data, *stack);
	*stack = node_new;
}
