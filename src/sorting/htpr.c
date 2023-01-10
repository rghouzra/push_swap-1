/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htpr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:12:36 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/10 14:06:54 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_index(t_stack **stk, int val)
{
	t_stack *tmp;
	int		i;

	i = 0;
	tmp = *stk;
	while (tmp)
	{
		if (tmp->index == val)
			break ;
		i++;
		tmp = tmp->next;
	}
	return (i);
}

// int calc_dis(int fbig, int sbig)
// {
	
// }