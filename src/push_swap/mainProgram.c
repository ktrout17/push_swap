/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainProgram.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 11:23:53 by kris              #+#    #+#             */
/*   Updated: 2020/05/03 12:18:54 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    freeAll(ts_stack *a, t_lst *cmd) {
    t_list  *temp1;
    t_lst   *temp2;

    while (a->head) {
        temp1 = a->head;
        a->head = a->head->next;
        free(temp1);
    }
    while (cmd) {
        temp2 = cmd;
        free(cmd->content);
        cmd = cmd->next;
        free(temp2);
    }
    free(a->ps);
}

int     main(int argc, char **argv) {
    ts_stack    a;
    ts_stack    b;
    t_lst       cmd;

    stackBuilder(&a, &b, argv, argc);
    if (!(a.ps = malloc(sizeof(t_list *) * argc)) || !(b.ps = malloc(sizeof(t_list *) * argc)))
        exit(1);
    a.argc = argc;
    b.argc = argc;
    a.top = 0;
    b.top = 0;
    a.ps[a.top] = NULL;
    b.ps[a.top] = NULL;
}