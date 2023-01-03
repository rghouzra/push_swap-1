/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 19:07:06 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/03 15:16:31 by aarbaoui         ###   ########.fr       */
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
