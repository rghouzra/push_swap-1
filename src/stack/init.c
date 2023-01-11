/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:24:49 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/11 16:19:52 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stklast(t_stack *stk)
{
	t_stack	*ptr;

	ptr = stk;
	if (!ptr)
		return (NULL);
	while (ptr->next != NULL)
		ptr = ptr->next;
	return (ptr);
}

static void	ft_gibindex(t_stack **stk, t_stack **new)
{
	t_stack	*ptr;
	t_stack	*tmp;
	t_stack	*tmp1;

	tmp1 = *stk;
	ptr = *stk;
	tmp = *new;
	while (ptr)
	{
		if (ptr->value < tmp->value)
			tmp->index++;
		else if (ptr->value > tmp->value)
			ptr->index++;
		else if (ptr->value == tmp->value)
		{
			ft_printf("Error: Duplicated numbers.\n");
			exit(1);
		}
		ptr = ptr->next;
	}
	*new = tmp;
	*stk = tmp1;
}

void	ft_stkadd(t_stack **ptr, int num)
{
	t_stack	*new;
	t_stack	*lst;

	new = (t_stack *)ft_calloc(1, sizeof(t_stack));
	if (!new)
		return ;
	new->value = num;
	ft_gibindex(ptr, &new);
	new->next = NULL;
	if (!*ptr)
		*ptr = new;
	else
	{
		lst = ft_stklast(*ptr);
		lst->next = new;
	}
}
