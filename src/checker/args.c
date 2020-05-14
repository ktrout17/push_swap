/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 14:15:56 by kris              #+#    #+#             */
/*   Updated: 2020/05/14 19:10:50 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int get_args(t_list **stack, char **argv, int start)
{
    int val;
    int i;

    if (israngeint(argv[start]) == 0)
        return (-1);
    val = ft_atoi(argv[start]);
    i = ++start;
    *stack = new_node();
    if (stack == NULL)
        return (-1);
    init_node(*stack, val, NULL);
    while (argv[i])
    {
        if (israngeint(argv[i]) == 0)
        {
            free_stack(*stack);
            return (-1);
        }
        val = ft_atoi(argv[i]);
        add_totail(stack, val);
        i++;
    }
    return (2);
}

int get_listargs(t_list **stack, char **argv, int argc)
{
    char **content;
    int start;
    int ret_stats;

    start = 0;
    ret_stats = 2;
    if (argc == 2)
        content = ft_strsplit(argv[1], ' ');
    else
    {
        content = argv;
        start++;
    }
    if (isallints(content) == 0)
        ret_stats = -1;
    if (get_args(stack, content, start) == -1)
        ret_stats = -1;
    if (start == 0)
        free_str(content);
    return (ret_stats);
}
