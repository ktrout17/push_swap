/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:22:33 by kris              #+#    #+#             */
/*   Updated: 2020/05/14 20:47:26 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#define INT_MIN (-2147483648)
#define INT_MAX 2147483648
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
void print(t_list **stack_a, t_list **stack_b, char *cmd);

/* swap functions */
void sa(t_list **stack_a);
void sb(t_list **stack_b);
void ss(t_list **stack_a, t_list **stack_b);

/* push functions */
void pa(t_list **stack_b, t_list **stack_a);
void pb(t_list **stack_a, t_list **stack_b);

/* rotate functions */
void ra(t_list **stack_a);
void rb(t_list **stack_b);
void rr(t_list **stack_a, t_list **stack_b);

/* reverse rotate functions */
void rra(t_list **stack_a);
void rrb(t_list **stack_b);
void rrr(t_list **stack_a, t_list **stack_b);

/* util functions */
char *delete_first(t_list **stack);
char *delete_last(t_list **stack);
t_list *new_node(void);
void *init_node(t_list *node, int data, t_list *next);
void add_tohead(t_list **stack, int data);
void add_totail(t_list **stack, int data);
void free_stack(t_list *head);
void free_str(t_list *head);
int get_listargs(t_list **stack, char **argv, int argc);

/* error handling functions */
int isallints(char **argv);
int israngeint(char *par);
int isdup(t_list **stack);

/* algo */
int issorted(t_list **stack_a, t_list **stack_b);
int isempty(t_list **stack);
int listlen(t_list **stack);
int getby_pos(t_list **stack, int pos);
int firstint(t_list **stack);
int lastint(t_list **stack);
int get_min(t_list **stack);
int get_midlen(int len);
int get_pos(t_list **stack, int data);
int get_steps(t_list **stack, int data);

void sort3(t_list **stack_a);
void sort5(t_list **stack_a, t_list **stack_b);

#endif
