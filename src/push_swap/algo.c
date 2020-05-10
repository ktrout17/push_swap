/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 13:49:05 by kris              #+#    #+#             */
/*   Updated: 2020/05/10 13:09:17 by kris             ###   ########.fr       */
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
    int     median;
    char    temp[a->argc * 4];

    temp[0] = "\0";
    count = getCount(a);
    median = INT_MAX;
    if (count <= 11 && count > 2)
        median = stackA_med(a);
    else if (count > 11)
        median = findTrue_med(a);
    if (median != INT_MAX)
        splitAfterMed_a(a, b, median, temp);
    else
        sortA(a, count, temp);
    if (temp[0])
        ft_lstaddtotail(cmd, ft_lstnew)
}

void    pushTo_b(ts_stack *b, ts_stack *a, int count, char *temp) {
    int     i;
    
    i = 0;
    if (count == -1) 
        count = 3;
    else
        count = count;
    while (i++ < count) {
        push(&b->head, &a->head, &a->tail);
        ft_strcat(temp, "pa\n");
    }
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