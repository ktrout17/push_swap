/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackB_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 08:27:41 by kris              #+#    #+#             */
/*   Updated: 2020/05/07 09:06:56 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int     stackB_med(ts_stack *b) {
    t_list  *temp;
    int     array[7];
    int     i;
    int     j[2];

    temp = b->head;
    i = 0;
    while (temp != b->ps[b->top]) {
        array[i++] = temp->data;
        temp = temp->next;
    }
    j[0] = -1;
    while (j[0]++ < i) {
        j[1] = j[0];
        while (++j[1] < i) {
            if (array[j[0]] > array[j[1]]) {
                array[6] = array[j[1]];
                array[j[1]] = array[j[0]];
                array[j[0]] = array[6];
            }
        }
    }
    if (!(b->ps[b->top]))
        return (array[2]);
    else
        return (array[1]);
}

int     lowSwitch_b(ts_stack *b, char *cmds, int med, int count[2]) {
    int     skips;
    t_list  *temp;

    skips = 0;
    temp = b->head;
    while ((temp != b->ps[b->top]) && (temp->next <= med)) {
        skips++;
        temp = temp->next;
    }
    if (temp == b->ps[b->top])
        return (0);
    count[0] = count[0] + skips;
    while (skips--) {
        rotate(&b->head, &b->tail);
        ft_strcat(cmds, "rb\n");
    }
    return (1);
}

void    splitAfterMed_b(ts_stack *a, ts_stack *b, int med, char *cmds) {
    int     count[2];

    count[0] = 0;
    count[1] = 0;
    while (b->head != b->ps[b->top]) {
        if (b->head->next > med) {
            push(&b->head, &a->head, &a->tail);
            ft_strcat(cmds, "pa\n");
        }
        else if (!(lowSwitch_b(b, cmds, med, count)))
            break ;
    }
    while (b->ps[b->top] && -- count[0] >= 0) {
        rev_rotate(&b->head, &b->tail);
        ft_strcat(cmds, "rrb\n");
    }
}

void    ifThreeNum_b(ts_stack *a, char *temp) {
    while (!((a->head->next->data > a->head->next->next->data) && (a->head->next > a->head->next->next->data))) {
        if ((a->head->next->data < a->head->next->next->data) && (a->head->next->data < a->head->data)) {
            rev_rotate(&a->head, &a->tail);
            ft_strcat(temp, "rrb\n");
        }
        else {
            rotate(&a->head, &a->tail);
            ft_strcat(temp, "rb\n");
        }
    }
    if (!(a->head->next->data > a->head->data))
        return ;
    swap(&a->head);
    ft_strcat(temp, "sb\n");
}

void    sortB(ts_stack *b, int count, char *temp) {
    if (b->top)
        b->top--;
    if (count == 1 || !count)
        return ;
    if (count == 2) {
        if ((b->head->next && b->head->next->data) > b->head->data) {
            swap(&b->head);
            ft_strcat(temp, "sb\n");
        }
        return ;
    }
    ifThreeNum_b(b, temp);
}