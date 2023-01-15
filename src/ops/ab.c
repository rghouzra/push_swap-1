/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:55:23 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/12 18:25:45 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_stack **a, t_stack **b, int fd)
{
	sa(a, 0);
	sb(b, 0);
	if (fd)
		ft_printf("ss\n");
}

void	rr(t_stack **a, t_stack **b, int fd)
{
	ra(a, 0);
	rb(b, 0);
	if (fd)
		ft_printf("rr\n");
}

void	rrr(t_stack **a, t_stack **b, int fd)
{
	rra(a, 0);
	rrb(b, 0);
	if (fd)
		ft_printf("rrr\n");
}
