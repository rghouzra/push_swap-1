/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:54:29 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/31 13:46:20 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_stack **b, int fd)
{
	int	tmp;
	t_stack *tmp2;

	if (*b == NULL || (*b)->next == NULL)
		return;
	tmp2 = *b;
	tmp = (*b)->value;
	(*b)->value = (*b)->next->value;
	(*b)->next->value = tmp;
	if (fd)
		ft_printf("sb\n");
}

void	pb(t_stack **a, t_stack **b)
{
	int	tmp;
	t_stack *tmp2;
	
	if (*a == NULL)
		return;
	tmp2 = *a;
	tmp = (*a)->value;
	push_front(b, tmp);
	*a = (*a)->next;
	free(tmp2);
	ft_printf("pb\n");
}

void	rb(t_stack **b, int fd)
{
	t_stack *tmp1;
	t_stack *tmp2;

	if (!*b)
		return ;
	tmp1 = (*b)->next;
	tmp2 = ft_stklast(*b);
	tmp2->next = *b;
	(*b)->next = NULL;
	*b = tmp1;
	if (fd)
		ft_printf("rb\n");
}

void	rrb(t_stack **b, int fd)
{
	t_stack	*tmp1;
	t_stack *tmp2;
	
	if (!*b)
		return ;
	tmp1 = *b;
	tmp2 = ft_stklast(*b);
	while (tmp1->next != tmp2)
		tmp1 = tmp1->next;
	tmp1->next = NULL;
	tmp2->next = *b;
	*b = tmp2;
	if (fd)
		ft_printf("rra");
}
