/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:24:49 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/30 16:14:49 by aarbaoui         ###   ########.fr       */
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

void	ft_stkadd(t_stack **ptr, int num)
{
	t_stack	*new;
	t_stack *lst;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->value = num;
	new->next = NULL;
	if (!*ptr)
		*ptr = new;
	else
	{
		lst = ft_stklast(*ptr);
		lst->next = new;
	}
}