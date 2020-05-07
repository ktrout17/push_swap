/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:22:33 by kris              #+#    #+#             */
/*   Updated: 2020/05/07 08:32:36 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MIN -2147483647
# define INT_MAX 2147483647
# include "libft/libft.h"
# include "Get_Next_Line/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct          s_list
{
    int                 data;
    struct s_list      *next;
    struct s_list      *prev;
}                       t_list;

typedef struct      ss_stack
{
    t_list          *head;
    t_list          *tail;
    t_list          **ps;
    int             argc;
    int             top;
}                   ts_stack;

void    stackBuilder(ts_stack *a, ts_stack *b, char **argv, int argc);
void    exitError(void);

/* checker input commands */
void    swapper(char *line, ts_stack *a, ts_stack *b);
void    rotater(char *line, ts_stack *a, ts_stack *b);
void    rev_rotater(char *line, ts_stack *a, ts_stack *b);

/* checker operations */
void    swap(t_list **head);
void    push(t_list **head, t_list **to, t_list **tail);
void    rotate(t_list **head, t_list **tail);
void    rev_rotate(t_list **head, t_list **tail);
void    display_stacks(t_list *a, t_list *b, char *line);

/* push_swap operations */
t_lst   *algo(ts_stack *a, ts_stack*b);
int     getCount(ts_stack *sorted);
int     stackA_med(ts_stack *a);
int     findTrue_med(ts_stack *a);
void    splitAfterMed_a(ts_stack *a, ts_stack *b, int med, char *cmds);

#endif 