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

#include "push_swap.h"

char		*delete_first(t_list **stack)
{
	char	*ret;
	t_list	*next;

	ret = "Error";
	next = NULL;
	if (*stack == NULL)
		return (ret);
	next = (*stack)->next;
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

char		*delete_by_index(t_list **stack, int n)
{
	int			i;
	char		*ret;
	t_list		*prev;
	t_list		*to_del;

	i = 0;
	ret = "Error\n";
	prev = *stack;
	to_del = NULL;
	if (n == 0)
		return (delete_first(stack));
	while (i < (n - 1))
	{
		if (prev->next == NULL)
			return (ret);
		prev = prev->next;
		i++;
	}
	to_del = prev->next;
	ret = ft_itoa(to_del->data);
	prev->next = to_del->next;
	free(to_del);
	return (ret);
}

char	*delete_by_data(t_list **stack, int data)
{
	char		*ret;
	t_list		*prev;
	t_list		*to_del;

	ret = "Error\n";
	prev = *stack;
	to_del = NULL;
	if (prev->data == data)
		return (delete_first(stack));
	while (prev)
	{
		to_del = prev->next;
		if (to_del->data == data)
			break ;
		prev = prev->next;
	}
	ret = ft_itoa(to_del->data);
	prev->next = to_del->next;
	free(to_del);
	return (ret);
}
