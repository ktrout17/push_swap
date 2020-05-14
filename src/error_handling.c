/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krissyleemc <krissyleemc@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 14:21:21 by kris              #+#    #+#             */
/*   Updated: 2020/05/14 19:39:56 by krissyleemc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int isargstr(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int isallints(char **argv)
{
	int i;

	i = 1;
	while (argv[i])
	{
		if (isargstr(argv[i]) == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}

static int iswhitespace(char c)
{
	if (c == ' ')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == '\t')
		return (1);
	else if (c == '\v')
		return (1);
	else if (c == '\r')
		return (1);
	return (0);
}

int israngeint(char *par)
{
	long ret;
	char *par_cpy;
	int sn;

	sn = 1;
	ret = 0;
	par_cpy = (char *)par;
	while (iswhitespace(*par_cpy) == 1)
		par_cpy++;
	if (*par_cpy == '-')
	{
		sn = -1;
		par_cpy++;
	}
	while (ft_isdigit(*par_cpy))
		ret = ret * 10 + (*par_cpy++ - '0');
	ret = ret * sn;
	if (ret > INT_MAX || ret < INT_MIN)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int isdup(t_list **stack)
{
	t_list *node1;
	t_list *node2;

	node1 = *stack;
	node2 = NULL;
	while (node1 && (node1->next))
	{
		node2 = node1->next;
		while (node2)
		{
			if (node1->data == node2->data)
			{
				free(*stack);
				ft_putstr("Error\n");
				return (1);
			}
			node2 = node2->next;
		}
		node1 = node1->next;
	}
	return (0);
}
