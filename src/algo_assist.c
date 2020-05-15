/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_assist.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 20:25:28 by krissyleemc       #+#    #+#             */
/*   Updated: 2020/05/14 20:36:44 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int     get_min(t_list **stack)
{
    t_list  *curr;
    int     min;

    curr = *stack;
    min = curr->data;
    curr = curr->next;
    while (curr)
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
    int     *pos;

    curr = *stack;
    pos = 1;
    while (curr)
    {
        if (curr->data == data)
            break;
        pos++;
        curr = curr->next;
    }
    return (pos);
}
