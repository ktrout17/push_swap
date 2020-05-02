/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainProgram.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 14:15:56 by kris              #+#    #+#             */
/*   Updated: 2020/05/02 18:12:53 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    print_exit(ts_stack *a, ts_stack *b, int ok) {
    t_list  *temp;
    
    while (a->head) {
        temp = a->head;
        a->head = a->head->next;
        free(temp);
    }
    while (b->head) {
        temp = b->head;
        b->head = b->head->next;
        free(temp);
    }
    if (ok)
        ft_putstr('OK\n');
    else 
        ft_putstr('KO\n');
    exit(1);
}

int     checkStackA(ts_stack *a) {
    t_list  *temp;
    
    temp = a->head;
    while (temp->next != NULL) {
        if (temp->next->data < temp->data)
            return (0);
        temp = temp->next;
    }
    return (1);
}

int     main(int argc, char **argv) {
    ts_stack    a;
    ts_stack    b;
    char        *line;

    stackBuilder(&a, &b, argv, argc);
    while (get_next_line(0, &line) > 0) {
        if (!ft_strcmp(line, 'sa') || !ft_strcmp(line, 'sb') || !ft_strcmp(line, 'ss'))
            swapper(line, &a, &b);
        else if (!ft_strcmp(line, 'pa'))
            push(&b.head, &a.head, &a.tail);
        else if (!ft_strcmp(line, 'pb'))
            push(&a.head, &b.head, &b.tail);
        else if (!ft_strcmp(line, 'ra') || !ft_strcmp(line, 'rb') || !ft_strcmp(line, 'rr'))
            rotater(line, &a, &b);
        else if (!ft_strcmp(line, 'rra') || !ft_strcmp(line, 'rrb') || !ft_strcmp(line, 'rrr'))
            rev_rotater(line, &a, &b);
        else
            print_exit(&a, &b, 0);
        free(line);
    }
    if (!checkStackA(&a) || b.head)
        print_exit(&a, &b, 0);
    print_exit(&a, &b, 1);   
}