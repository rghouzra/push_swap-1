/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:14:32 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/10 14:34:08 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int get_dis(t_stack *ptr, int index)
{
	if (index < ft_stklen(ptr) - index)
		return (index);
	return (ft_stklen(ptr) - index);
}

static void	testing(t_stack **b)
{
	int len = ft_stklen(*b) - 1;
	int dis =  get_dis(*b, find_index(*b, len));
	ft_printf("\n\n\n\n");
	ft_stkprint(*b);
	ft_printf("\n\n\n\n");
	while (dis > 0)
	{
		if ()
		rrb(b, 1);
		dis--;
	}
	ft_stkprint(*b);
}

void    sort_init(t_stack **a, t_stack **b, int d)
{
	int size;
	int max;
	int chunk;
	
	size = ft_stklen(*a);
	chunk = size / d;
	max = chunk;
	while (1)
	{
		push_chunks(a, b, chunk, max);
		if (!ft_stklen(*a))
			break ;
		max += chunk;
	}
	testing(b);
}

void    push_chunks(t_stack **a, t_stack **b, int chunk, int max)
{
	int	i;
	int	half;

	half = chunk / 2;
	i = 0;
	while (i < chunk && *a)
	{
		if ((*a)->index <= max)
		{
			if ((*a)->index <= max - half)
				pb(a, b);
			else
			{
				pb(a, b);
				rb(b, 1);
			}
			i++;
		}
		else
			ra(a, 1);
	}
}

