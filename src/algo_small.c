/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 19:58:14 by krissyleemc       #+#    #+#             */
/*   Updated: 2020/05/14 20:28:58 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void sort3_cmds(t_list **stack_a, int first, int mid, int last)
{
    if ((first < mid) && (first > last))
        print(stack_a, NULL, "rra");
    else if ((first < last) && (first > mid))
        print(stack_a, NULL, "sa");
    else if ((first > last) && (mid < last))
        print(stack_a, NULL, "ra");
    else if ((first < last) && (mid > last))
    {
        print(stack_a, NULL, "rra");
        print(stack_a, NULL, "sa");
    }
    else if ((first > mid) && (mid > last))
    {
        print(stack_a, NULL, "ra");
        print(stack_a, NULL, "sa");
    }
}

void sort3(t_list **stack_a)
{
    int first;
    int mid;
    int last;

    first = firstint(stack_a);
    mid = getby_pos(stack_a, 2);
    last = lastint(stack_a);
    sort3_cmds(stack_a, first, mid, last);
}

void sort5(t_list **stack_a, t_list **stack_b)
{
    int min;
    int steps;
    char *cmds;

    cmds = NULL;
    while (listlen(stack_a) > 3)
    {
        min = get_min(stack_a);
    }
}
