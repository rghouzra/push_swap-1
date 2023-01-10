/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hlpr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 13:40:52 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/08 18:36:58 by aarbaoui         ###   ########.fr       */
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
		ft_printf("value: %d\n", tmp->value);
		tmp = tmp->next;
	}
	ft_printf("value: %d\n", tmp->value);
}


int	ft_stklen(t_stack *head)
{
	t_stack *ptr;
	int		i;

	i = 0;
	if (!head)
		return (0);
	ptr = head;
	if (ptr == NULL)
		return (0);
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

