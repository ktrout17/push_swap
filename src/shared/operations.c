/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:58:45 by kris              #+#    #+#             */
/*   Updated: 2020/05/11 13:22:20 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void    swap(t_list **head) {
    t_list  *temp;
    
    if (*head == NULL || (*head)->next == NULL)
        return ;
    temp = *head;
    *head = (*head)->next;
    temp->next = (*head)->next;
    temp->prev = *head;
    (*head)->next = temp;
    (*head)->prev = NULL;
}

void    push(t_list **head, t_list **to, t_list **tail) {
    t_list  *temp;
    
    if (*head == NULL)
        return ;
    temp = *head;
    *head = (*head)->next;
    if (*head) 
        (*head)->prev = NULL;
    if (*to)
        (*to)->prev = temp;
    else
        *tail = temp;
    temp->next = *to;
    *to = temp;
    (*to)->prev = NULL;
    
}

void    rotate(t_list **head, t_list **tail) {
    if (*head == NULL || *tail == NULL || (*head)->next == NULL)
        return ;
    (*tail)->next = *head;
    (*head)->prev = *tail;
    *head = (*head)->next;
    (*head)->prev = NULL;
    *tail = (*tail)->next;
    (*tail)->next = NULL;
}

void    rev_rotate(t_list **head, t_list **tail) {
    if (*head == NULL || *tail == NULL || (*tail)->prev == NULL)
        return ;
    (*head)->prev = *tail;
    (*tail)->next = *head;
    *head = *tail;
    *tail = (*tail)->prev;
    (*tail)->next = NULL;
    (*head)->prev = NULL;
}

void    display_stacks(t_list *a, t_list *b, char *line) {
    t_list  *temp;
    
    temp = a;
    ft_putstr('A\n');
    ft_putstr('__\n');
    ft_putstr(line);
    while (temp) {
        ft_putstr(temp->data);
        ft_putchar(' ');
        temp = temp->next;
    }
    ft_putchar('\n');
}