/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 14:15:56 by kris              #+#    #+#             */
/*   Updated: 2020/05/16 10:17:26 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int      get_args(t_list **stack, char **argv, int start)
{
    int     data;
    int     i;

    if (israngeint(argv[start]) == 0)
        return (-1);
    data = ft_atoi(argv[start]);
    i = ++start;
    *stack = new_node();
    if (stack == NULL)
        return (-1);
    init_node(*stack, data, NULL);
    while (argv[i])
    {
        if (israngeint(argv[i]) == 0)
        {
            free_stack(*stack);
            return (-1);
        }
        data = ft_atoi(argv[i]);
        add_totail(stack, data);
        i++;
    }
    return (2);
}

int         get_listargs(t_list **stack, char **argv, int argc)
{
    char    **content;
    int     start;
    int     ret_stats;

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
