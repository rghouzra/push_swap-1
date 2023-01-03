/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:49:19 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/03 19:09:57 by aarbaoui         ###   ########.fr       */
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

static int plsfind(t_stack **a, int val)
{
	t_stack *tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		if (tmp->index == val)
			break ;
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	sort_two(t_stack **a)
{
	if (!is_sorted(*a))
		sa(a, 1);
}

void    sort_four(t_stack **a, t_stack **b)
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
	i = plsfind(a, min);
	while (i-- > 0)
		ra(a, 1);
	pb(a, b);
	sort_three(a);
	pa(a, b);
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
	i = plsfind(a, min);
	while (i-- > 0)
		ra(a, 1);
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}