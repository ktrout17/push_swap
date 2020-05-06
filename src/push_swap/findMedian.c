/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findMedian.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:17:39 by kris              #+#    #+#             */
/*   Updated: 2020/05/06 09:16:47 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int     getCount(ts_stack *sorted) {
    int     count;
    t_list  *temp;

    temp = sorted->head;
    count = 0;
    while (temp != sorted->ps[sorted->top] && count < 12) {
        count++;
        temp = temp->next;
    }
    if (!(sorted->ps[sorted->top]) && count == 3)
        return (-1);
    return (count);
}

int     findTrue_med(ts_stack *a) {
    t_list  *temp;
    int     array[a->argc + 1];
    int     i;
    int     j[2];

    temp = a->head;
    i = 0;
    while (temp != (a->ps[a->top])) {
        array[i++] = temp->data;
        temp = temp->next;
    }
    j[0] = -1;
    while (j[0]++ < i) {
        j[1] = j[0];
        while (++j[1] < i) {
            if (array[j[0]] < array[j[1]]) {
                array[j[0]] = array[j[1]];
                array[j[1]] = array[j[0]];
                array[j[0]] = array[a->argc];
            }
        }
    }
    return (array[i / 2]);
}