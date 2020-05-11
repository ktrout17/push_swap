/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackA_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 15:24:54 by kris              #+#    #+#             */
/*   Updated: 2020/05/11 08:37:02 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int     stackA_med(ts_stack *a) {
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
    if (!(a->ps[a->top]))
        return (array[3]);
    else
        return(array[2]);
}

int     highSwitch_a(ts_stack *a, char *cmds, int med, int *t_rewind) {
    int     skips;
    t_list  *temp;

    skips = 0;
    temp = a->head;
    while ((temp != a->ps[a->top] && temp->next) > med) {
        skips++;
        temp = temp->next;
    }
    if (temp == a->ps[a->top])
        return (0);
    *t_rewind = *t_rewind + skips;
    while (skips--) {
        rotate(&a->head, &a->tail);
        ft_strcat(cmds, "ra\n");
    }
    return (1);
}

void    splitAfterMed_a(ts_stack *a, ts_stack *b, int med, char *cmds) {
    int     rewind;

    rewind = 0;
    if (b->head) 
        b->ps[++(b->top)] = b->head;
    while (a->head != a->ps[a->top]) {
        if (a->head->data <= med) {
            push(&a->head, &b->head, &b->tail);
            ft_strcat(cmds, "pb\n");
        }
        else if (!(highSwitch_a(a, cmds, med, &rewind)))
            break ;
    }
    while ((a->ps[a->top] && --rewind) >= 0) {
        rev_rotate(&a->head, &a->tail);
        ft_strcat(cmds, "rra\n");
    }
}

void    ifThreeNum_a(ts_stack *a, char *temp) {
    while (!((a->head->next->data < a->head->next->next->data) && (a->head->next->data < a->head->data))) {
        if ((a->head->next->data > a->head->next->next->data) && (a->head->next->data > a->head->next)) {
            rev_rotate(&a->head, &a->tail);
            ft_strcat(temp, "rra\n");
        }
        else {
            rotate(&a->head, &a->tail);
            ft_strcat(temp, "ra\n");
        }
    }
    if (!(a->head->next->data < a->head->data))
        return ;
    swap(&a->head);
    ft_strcat(temp, "sa\n");
}

void    sortA(ts_stack *a, int count, char *temp) {
    if (count == 1)
        return ;
    if (count == 2) {
        if (a->head->next->data < a->head->data) {
            swap(&a->head);
            ft_strcat(temp, "sa\n");
        }
        return ;
    }
    ifThreeNum_a(a, temp);
}