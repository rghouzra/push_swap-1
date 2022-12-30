/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:26:50 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/30 15:02:19 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	int	tmp;

	tmp = a->value;
	a->value = a->next->value;
	a->next->value = tmp;
	ft_printf("sa\n");
}

void	pa(t_stack **a, t_stack **b)
{
	int	tmp;
	t_stack *tmp2;
	
	if (*b == NULL)
		return;
	tmp2 = *b;
	tmp = (*b)->value;
	push_front(a, tmp);
	*b = (*b)->next;
	free(tmp2);
	ft_printf("pa\n");
}