/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackBuilder.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 14:21:21 by kris              #+#    #+#             */
/*   Updated: 2020/05/02 16:26:53 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int     checkInts(int argc, char **argv) {
    int i;
    int j;

    i = 1;
    while (i < argc) {
        j = 0;
        if (argv[i][j] == '-')
            j++;
        if (!ft_isdigit(argv[i][j]))
            return (0);
        while (ft_isdigit(argv[i][j]))
            j++;
        if (argv[i][j])
            return (0);
        i++;
    }
    return (1);
}

void    exitError(void) {
    ft_putstr('ERROR\n');
    exit(1);
}

void    addToTail(char *str, t_list **end) {
    t_list  *temp;
    int     num;

    num = ft_atoi(str);
    if (num > INT_MAX || num < INT_MIN)
        exitError();
    if ((*end) == NULL)
        return ;
    temp = malloc(sizeof(t_list));
    temp->data = num;
    temp->next = NULL;
    (*end)->next = temp;
    temp->prev = (*end);
    (*end) = temp;
}

int     checkDuplicates(ts_stack *a, int argc) {
    t_list  *temp;
    int     i;
    int     j;
    int     k;
    int     array[argc + 1];
    
    temp = a->head;
    i = 0;
    while (temp) {
        array[i++] = temp->data;
        temp = temp->next;
    }
    j = -1;
    while (j++ < i) {
        k = j;
        while (++k < i) {
            if (array[j] == array[k]) 
                return (0);
        }
    }
    return (1);
}

void    stackBuilder(ts_stack *a, ts_stack *b, char **argv, int argc) {
    int     i;
    t_list  *temp;

    i = 1;
    if (!checkInts(argc, argv) || !(a->head = malloc(sizeof(t_list))))
        exitError();
    a->head->data = ft_atoi(argv[i++]);
    a->head->prev = NULL;
    a->tail = a->head;
    while (i < argc) {
        addToTail(argv[i++], &a->tail);
    }
    if (!checkDuplicates(a, argc)) {
        while (a->head) {
            temp = a->head;
            a->head = a->head->next;
            free(temp);
        }
        exitError();
    }
    b->head = NULL;
    b->tail = NULL;
}