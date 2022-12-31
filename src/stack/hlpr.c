/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hlpr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:40:52 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/31 17:24:31 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_front(t_stack **head, int val)
{
	t_stack *new_node;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	new_node->value = val;
	new_node->next = *head;
	*head = new_node;
}

void	ft_stkprint(t_stack *head)
{
	t_stack *tmp;

	if (!head)
		return ;
	tmp = head;
	while (tmp && tmp->next)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	ft_printf("%d", tmp->value);
}
