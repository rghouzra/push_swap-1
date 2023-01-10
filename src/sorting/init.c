/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:49:19 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/08 16:14:27 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_three(t_stack **a)
{
	t_stack *ptr;
	int     f;
	int     s;
	int     t;

	ptr = *a;
	f = ptr->index;
	s = ptr->next->index;
	t = ptr->next->next->index;
	if (f > s && s > t)
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (f > s && s < t && f > t)
		ra(a, 1);
	else if (f < s && s > t && f < t)
	{
			sa(a, 1);
			ra(a, 1);
	}
	else if (f < s && s > t && f > t)
		rra(a, 1);
	else if (f > s && s < t && f < t)
		sa(a, 1);
}



static void	ft_norm(t_stack **a, t_stack **b, int i)
{
	while (i-- > 0)
		ra(a, 1);	
	pb(a, b);
}

void sort_four(t_stack **a, t_stack **b)
{
	t_stack *tmp1;
	t_stack *tmp2;
	int i;
	int min;

	tmp1 = *a;
	tmp2 = *a;
	min = tmp1->index;
	while (tmp1 && tmp1->next)
	{
		if (tmp1->index < min)
		{
			tmp2 = tmp1;
			min = tmp1->index;
		}
		tmp1 = tmp1->next;
	}
	i = find_index(a, min);
	ft_norm(a, b, i);
	sort_three(a);
	pa(a, b);
	if (!is_sorted(*a))
		sa(a, 1);
}

void	sort_five(t_stack **a, t_stack **b)
{
	t_stack	*tmp1;
	t_stack *tmp2;
	int		i;
	int		min;
	
	i = 0;
	tmp1 = *a;
	tmp2 = *a;
	min = 0;
	while (tmp1 && tmp1->next)
	{
		if (tmp1->index < tmp2->index)
		{
			tmp2 = tmp1;
			min = tmp1->index;
		}
		tmp1 = tmp1->next;
	}
	i = find_index(a, min);
	ft_norm(a, b, i);
	sort_four(a, b);
	pa(a, b);
	if (!is_sorted(*a))
		sa(a, 1);
}