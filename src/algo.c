/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 19:28:48 by krissyleemc       #+#    #+#             */
/*   Updated: 2020/05/14 20:21:33 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort(t_list *stack_a, t_list **stack_b)
{
    if (issorted(stack_a, stack_b) == 0)
    {
        if (listlen(stack_a) == 2)
            print(stack_a, stack_b, "sa");
        else if (listlen(stack_a) == 3)
            sort3(stack_a);
        else if (listlen(stack_a) == 5)
    }
}
