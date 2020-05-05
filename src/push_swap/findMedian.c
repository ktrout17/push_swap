/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findMedian.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:17:39 by kris              #+#    #+#             */
/*   Updated: 2020/05/05 15:22:04 by kris             ###   ########.fr       */
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