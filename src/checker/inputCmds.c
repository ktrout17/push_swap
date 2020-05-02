/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputCmds.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:45:07 by kris              #+#    #+#             */
/*   Updated: 2020/05/02 17:45:59 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    swapper(char *line, ts_stack *a, ts_stack *b) {
    if (!ft_strcmp(line, 'sa')) {
        swap(&a->head);
        return ;
    }
    if (!ft_strcmp(line, 'sb')) {
        swap(&b->head);
        return ;
    }
    swap(&a->head);
    swap(&b->head);
}

void    rotater(char *line, ts_stack *a, ts_stack *b) {
    if (!ft_strcmp(line, 'ra')) {
        rotate(&a->head, &a->tail);
        return ;
    }
    if (!ft_strcmp(line, 'rb')) {
        rotate(&b->head, &b->tail);
        return ;
    }
    rotate(&a->head, &a->tail);
    rotate(&b->head, &b->tail);
}

void    rev_rotater(char *line, ts_stack *a, ts_stack *b) {
    if (!ft_strcmp(line, 'rra')) {
        rev_rotate(&a->head, &a->tail);
        return ;
    }
    if (!ft_strcmp(line, 'rrb')) {
        rev_rotate(&b->head, &b->tail);
        return ;
    }
    rev_rotate(&a->head, &a->tail);
    rev_rotate(&b->head, &b->tail);
}