/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 10:40:41 by krissyleemc       #+#    #+#             */
/*   Updated: 2020/05/14 20:14:27 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int isempty(t_list **stack)
{
    if (*stack == NULL)
        return (1);
    return (0);
}

int listlen(t_list **stack)
{
    int count;
    t_list *node;

    count = 0;
    node = *stack;
    while (node)
    {
        node = node->next;
        count++;
    }
    return (count);
}

int getby_pos(t_list **stack, int pos)
{
    int i;
    t_list *node;

    i = 0;
    pos--;
    node = *stack;
    while (i < pos)
    {
        node = node->next;
        i++;
    }
    return (node->data);
}

int firstint(t_list **stack)
{
    if (*stack)
        return ((*stack)->data);
    return (0);
}

int lastint(t_list **stack)
{
    t_list *node;

    node = *stack;
    while (node->next)
        node = node->next;
    return (node->data);
}
