/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htpr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:12:36 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/10 14:11:41 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_index(t_stack *stk, int val)
{
	int	i;

	i = 0;
	while (stk)
	{
		if (stk->index == val)
			return (i);
		i++;
		stk = stk->next;
	}
	return (-1);
}

// int calc_dis(int fbig, int sbig)
// {
	
// }