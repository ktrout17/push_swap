/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_steps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 20:29:26 by krissyleemc       #+#    #+#             */
/*   Updated: 2020/05/14 20:38:22 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int get_steps(t_list **stack, int data)
{
    int size;
    int midlen;
    int pos;
    int steps;

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
