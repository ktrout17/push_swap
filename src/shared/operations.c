/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:58:45 by kris              #+#    #+#             */
/*   Updated: 2020/05/13 20:23:03 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int op(t_list **stack_a, t_list **stack_b, char *cmd)
{
	if (ft_strcmp(cmd, "sa") == 0)
		sa(stack_a);
	else if (ft_strcmp(cmd, "sb") == 0)
		sb(stack_b);
	else if (ft_strcmp(cmd, "ss") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(cmd, "pa") == 0)
}
