/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddtotail.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kris <kris@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 09:15:09 by kris              #+#    #+#             */
/*   Updated: 2020/05/07 09:15:34 by kris             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstaddtotail(t_lst **alst, t_lst *new) {
    t_lst   *temp;

    temp = *alst;
    if (temp == NULL) {
        *alst = new;
        new->next = NULL;
    }
    else {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new;
        new->next = NULL;
    }
}