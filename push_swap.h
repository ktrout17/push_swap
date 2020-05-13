/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:22:33 by kris              #+#    #+#             */
/*   Updated: 2020/05/13 21:02:38 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#define INT_MIN -2147483647
#define INT_MAX 2147483647
#include "libft/libft.h"
#include "libft/get_next_line.h"
#include <unistd.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
} t_list;

typedef struct ss_stack
{
	int data;
	int a_pos;
	int a_step;
	int b_step;
	int all_step;
	int smaller;
	int smaller_pos;
	char *a_op;
	char *b_op;
} ts_stack;

/* operations */
int op(t_list **stack_a, t_list **stack_b, char *cmd);

/* swap functions */
void sa(t_list **stack_a);
void sb(t_list **stack_b);
void ss(t_list **stack_a, t_list **stack_b);

/* util functions */
char *delete_first(t_list **stack);
t_list *new_node(void);
void *init_node(t_list *node, int data, t_list *next);
void add_tohead(t_list **stack, int data);

#endif
