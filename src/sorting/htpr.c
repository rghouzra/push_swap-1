/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   htpr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:12:36 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/11 13:47:18 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_index(t_stack *stk, int val)
{
	t_stack *ptr;
	int		i;

	i = 0;
	ptr = stk;
	while (ptr)
	{
		if (ptr->index == val)
			return (i);
		ptr = ptr->next;
		i++;
	}
	return (-1);
}

int	get_dis(t_stack *ptr, int index)
{
	if (index < ft_stklen(ptr) - index)
		return (index);
	return (ft_stklen(ptr) - index);
}

void	push_two_top(t_stack **a, t_stack **b, int *index, int i)
{
	int	j;

	push_top(b, *index - 1, i);
	pa(a, b);
	j = find_index(*a, *index);
	push_top(b, *index, j);
	(*index)--;
	pa(a, b);
	sa(a, 1);
}

void	push_top(t_stack **stk, int index, int len)
{
	if (len < ft_stklen(*stk) / 2)
		while ((*stk)->index != index)
			rb(stk, 1);
	else
		while ((*stk)->index != index)
			rrb(stk, 1);
}
