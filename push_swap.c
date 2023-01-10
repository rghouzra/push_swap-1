/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:26:31 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/08 13:30:47 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack **a)
{
	if (!is_sorted(*a))
		sa(a, 1);
}

void	do_stack(t_stack **a, t_stack **b, int len)
{
	if (is_sorted(*a))
		return ;
	if (len == 2)
		sort_two(a);
	if (len == 3)
		sort_three(a);
	if (len == 4)
		sort_four(a, b);
	if (len == 5)
		sort_five(a, b);
	if (len > 5 && len < 200)
		sort_init(a, b, 5);
	if (len >= 200)
		sort_init(a, b, 10);
}

int main (int ac, char *av[])
{
	t_stack *a;
	t_stack *b;
	int		slen;
	
	a = NULL;
	b = NULL;
	if (ac > 2)
	{
		slen = 0;
		add_stack(&a, av, &slen);
		do_stack(&a, &b, slen);
	}
	return (0);
}
