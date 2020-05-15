/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_assist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 20:25:28 by krissyleemc       #+#    #+#             */
/*   Updated: 2020/05/15 14:25:17 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     get_min(t_list **stack)
{
    t_list  *curr;
    int     min;

    curr = *stack;
    min = curr->data;
    curr = curr->next;
    while (curr != NULL)
    {
        if (min > curr->data)
            min = curr->data;
        curr = curr->next;
    }
    return (min);
}

int     get_midlen(int len)
{
    int     midlen;

    midlen = len / 2;
    if ((len % 2) != 0)
        midlen++;
    return (midlen);
}

int     get_pos(t_list **stack, int data)
{
    t_list  *curr;
    int     pos;

    curr = *stack;
    pos = 1;
    while (curr != NULL)
    {
        if (curr->data == data)
            break ;
        pos++;
        curr = curr->next;
    }
    return (pos);
}

int     get_max(t_list **stack)
{
    t_list  *curr;
    int     max;

    curr = *stack;
    max = curr->data;
    curr = curr->next;
    while (curr != NULL)
    {
        if (max < curr->data)
            max = curr->data;
        curr = curr->next;
    }
    return (max);
}

int     get_smaller(t_list **stack_b, int data)
{
    t_list  *curr;
    int     smaller;

    curr = *stack_b;
    if (get_min(stack_b) < data)
    {
        smaller = get_min(stack_b);
        while (curr != NULL)
        {
            if ((smaller < curr->data) && (curr->data < data))
                smaller = curr->data;
            curr = curr->next;
        }
    }
    else
        smaller = get_max(stack_b);
    return (smaller);
}