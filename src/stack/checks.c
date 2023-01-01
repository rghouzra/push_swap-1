/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 19:07:06 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/31 19:10:19 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_stack *stk)
{
    t_stack *tmp;
    
    tmp = stk;
    while (tmp->next)
    {
        if (tmp->value >= tmp->next->value)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}
