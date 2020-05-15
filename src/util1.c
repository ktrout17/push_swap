/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 11:23:53 by kris              #+#    #+#             */
/*   Updated: 2020/05/10 13:47:12 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char		*delete_first(t_list **stack)
{
	char	*ret;
	t_list	*next;

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

char		*delete_last(t_list **stack)
{
	char	*ret;
	t_list	*curr;

	ret = "Error";
	curr = NULL;
	if ((*stack)->next == NULL)
	{
		ret = ft_itoa((*stack)->data);
		free(*stack);
		return (ret);
	}
	curr = *stack;
	while (curr->next->next != NULL)
		curr = curr->next;
	ret = ft_itoa(curr->next->data);
	free(curr->next);
	curr->next = NULL;
	return (ret);
}

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

void		free_stack(t_list *head)
{
	t_list	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

void		free_str(t_list *head)
{
	t_list	*temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
