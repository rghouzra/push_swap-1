/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 12:26:50 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/15 13:13:57 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, int fd)
{
	int		tmp;
	t_stack	*tmp2;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	tmp2 = *a;
	tmp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->index = (*a)->next->index;
	(*a)->next->value = tmp;
	(*a)->next->index = tmp2->index;
	if (fd)
		ft_printf("sa\n");
}

void	pa(t_stack **a, t_stack **b, int fd)
{
	int		tmp;
	t_stack	*tmp2;

	if (*b == NULL)
		return ;
	tmp2 = *b;
	tmp = (*b)->value;
	push_front(a, tmp, (*b)->index);
	*b = (*b)->next;
	free(tmp2);
	if (fd)
		ft_printf("pa\n");
}

void	ra(t_stack **a, int fd)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!*a)
		return ;
	tmp1 = (*a)->next;
	tmp2 = ft_stklast(*a);
	tmp2->next = *a;
	(*a)->next = NULL;
	*a = tmp1;
	if (fd)
		ft_printf("ra\n");
}

void	rra(t_stack **a, int fd)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (!*a || !(*a)->next)
		return ;
	tmp1 = *a;
	tmp2 = ft_stklast(*a);
	while (tmp1->next != tmp2)
		tmp1 = tmp1->next;
	tmp1->next = NULL;
	tmp2->next = *a;
	*a = tmp2;
	if (fd)
		ft_printf("rra\n");
}
