/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 13:17:32 by kris              #+#    #+#             */
/*   Updated: 2020/05/15 13:24:32 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			displist(t_list **stack)
{
	t_list		*curr;

	curr = *stack;
	if (curr == NULL)
	{
		ft_putstr("");
		return ;
	}
	while (curr)
	{
		ft_putnbr(curr->data);
		ft_putchar('\n');
		curr = curr->next;
	}
}

static void		format(t_list *node)
{
	int		len;

	len = ft_intlen(node->data);
	if (len == 3)
		ft_putstr(" ");
	else if (len == 2)
		ft_putstr("  ");
	else if (len == 1)
		ft_putstr("   ");
	ft_putnbr(node->data);
}

void			displists(t_list **stack_a, t_list **stack_b)
{
	t_list			*a;
	t_list			*b;

	a = *stack_a;
	b = *stack_b;
	while ((a) || (b))
	{
		if (a != NULL)
		{
			format(a);
			a = a->next;
		}
		else
			ft_putstr("    ");
		ft_putstr(" ");
		if (b != NULL)
		{
			format(b);
			b = b->next;
		}
		else
			ft_putstr("    ");
		ft_putchar('\n');
	}
	ft_putstr("---- ----\n   A    B\n");
}