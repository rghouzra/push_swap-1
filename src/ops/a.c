/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:26:50 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/30 18:59:09 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	int	tmp;
	t_stack *tmp2;

	if (*a == NULL || (*a)->next == NULL)
		return;
	tmp2 = *a;
	tmp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->next->value = tmp;
	ft_printf("sa\n");
}

void	pa(t_stack **a, t_stack **b)
{
	int	tmp;
	t_stack *tmp2;
	
	if (*b == NULL || *a == NULL)
		return ;
	tmp2 = *b;
	tmp = (*b)->value;
	push_front(a, tmp);
	*b = (*b)->next;
	free(tmp2);
	ft_printf("pa\n");
}

void	ra(t_stack **a)
{
	t_stack *tmp1;
	t_stack *tmp2;

	if (!*a)
		return ;
	tmp1 = (*a)->next;
	tmp2 = ft_stklast(*a);
	tmp2->next = *a;
	(*a)->next = NULL;
	*a = tmp1;
	ft_printf("ra\n");
}

void	rra(t_stack **a)
{
	t_stack	*tmp1;
	t_stack *tmp2;
	
	if (!*a)
		return ;
	tmp1 = *a;
	tmp2 = ft_stklast(*a);
	while (tmp1->next != tmp2)
		tmp1 = tmp1->next;
	tmp1->next = NULL;
	tmp2->next = *a;
	*a = tmp2;
	ft_printf("rra");
}