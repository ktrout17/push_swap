/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_steps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 20:29:26 by krissyleemc       #+#    #+#             */
/*   Updated: 2020/05/15 12:21:35 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int         get_steps(t_list **stack, int data)
{
    int     size;
    int     midlen;
    int     pos;
    int     steps;

    size = listlen(stack);
    midlen = get_midlen(size);
    pos = get_pos(stack, data);
    steps = 0;
    if (pos > midlen)
        steps = (size - pos) + 1;
    else if (pos <= midlen)
        steps = pos - 1;
    return (steps);
}

ts_stack        *get_smlsteps(t_list **stack_a, t_list **stack_b, int data, int tot)
{
    ts_stack    *smlstepper;
    
    smlstepper = malloc(sizeof(ts_stack));
    smlstepper->data = data;
    smlstepper->a_pos = get_pos(stack_a, data);
    smlstepper->a_step = get_steps(stack_a, data);
    smlstepper->b_step = get_steps(stack_b, get_smaller(stack_b, data));
    smlstepper->all_step = tot;
    smlstepper->smaller = get_smaller(stack_b, data);
    smlstepper->smaller_pos = get_pos(stack_b, get_smaller(stack_b, data));
    if (smlstepper->a_pos > (get_midlen(listlen(stack_a))))
        smlstepper->a_cmd = ft_strdup("rra");
    else
        smlstepper->a_cmd = ft_strdup("ra");
    if (smlstepper->smaller_pos > (get_midlen(listlen(stack_b))))
        smlstepper->b_cmd = ft_strdup("rrb");
    else
        smlstepper->b_cmd =ft_strdup("rb");
    return (smlstepper);
}

ts_stack        *get_smallsteps(t_list **stack_a, t_list **stack_b)
{
    t_list      *curr;
    int         smallsteps;
    int         smallsteps_data;
    int         currsteps;
    int         smaller;

    curr = *stack_a;
    smallsteps_data = curr->data;
    smallsteps = get_steps(stack_a, smallsteps_data);
    smallsteps = smallsteps + get_steps(stack_b, get_smaller(stack_b,smallsteps_data));
    while (curr)
    {
        currsteps = get_steps(stack_a, curr->data);
        smaller = get_smaller(stack_b, curr->data);
        currsteps = currsteps + get_steps(stack_b, smaller);
        if (currsteps < smallsteps)
        {
            smallsteps_data = curr->data;
            smallsteps = currsteps;
        }
        curr = curr->next;
    }
    return (get_smlsteps(stack_a, stack_b, smallsteps_data, smallsteps));
}