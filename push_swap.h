/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 11:22:33 by kris              #+#    #+#             */
/*   Updated: 2020/05/11 14:19:18 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define INT_MIN -2147483647
# define INT_MAX 2147483647
# include "libft/libft.h"
# include "libft/get_next_line.h"
# include <unistd.h>

typedef struct          s_list
{
    int                 data;
    struct s_list      *next;
}                       t_list;

typedef struct      ss_stack
{
    int				data;
	int				a_pos;
	int				a_step;
	int				b_step;
	int				all_step;
	int				smaller;
	int				smaller_pos;
	char			*a_op;
	char			*b_op;
}                   ts_stack;


#endif 
