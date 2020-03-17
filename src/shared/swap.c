/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 13:41:26 by kris              #+#    #+#             */
/*   Updated: 2020/03/17 14:11:57 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_stack **a) {
    t_stack *temp = (*a);

    if ((*a != NULL) && ((*a)->next != NULL)) {
        temp->prev = (*a)->prev;
        temp->next = (*a)->next;

        (*a)->prev = (*a)->next->prev;
        (*a)->next = (*a)->next->next;

        (*a)->next->prev = temp->prev;
        (*a)->next->next = temp->next;
    }
}

void printList()

