/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 13:49:05 by kris              #+#    #+#             */
/*   Updated: 2020/05/05 15:23:36 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int     isSorted(ts_stack *a) {
    t_list  *temp;

    temp = a->head;
    while (temp) {
        if ((temp->next && temp->next->data) < temp->data)
            return (0);
        temp = temp->next;
        if (temp == a->ps[a->top])
            break ;
    }
    return (1);
}

int     halfStack_a(ts_stack *a, ts_stack *b, t_lst **cmd) {
    int     count;
    long    median;
    char    temp[a->argc * 4];

    temp[0] = "\0";
    count = getCount(a);
    median = INT_MAX;
    if (count <= 11 && count > 2)
        median =
}

t_lst   *algo(ts_stack *a, ts_stack*b) {
    t_lst   *cmd;
    int     ret;
    int     sort;

    cmd = ft_lstnew((void *)"\0", 1);
    while (!(sort = isSorted(a)) || b->head != NULL) {
        if (!sort) {
            while ((ret))
        }
    }
}