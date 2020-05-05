/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackA_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:24:54 by kris              #+#    #+#             */
/*   Updated: 2020/05/05 15:31:21 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long    stackA_med(ts_stack *a) {
    t_list  *temp;
    int     array[12];
    int     i;
    int     j[2];

    temp = a->head;
    i = 0;
    while (temp != a->ps[a->top]) {
        array[i++] = temp->data;
        temp = temp->next;
    }
    j[0] = -1;
    while (j[0]++ < i) {
        j[1] = j[0];
        while (++j[1] < i) {
            if (array[j[0]] < array[j[1]]) {
                array[11] = array[j[1]];
                array[j[1]] = array[j[0]];
                array[j[0]] = array[11];
            }
        }
    }
    return ((!a->ps[a->top]) ? array[3] : array[2]);
}