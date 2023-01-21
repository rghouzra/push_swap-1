/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:42:47 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/15 14:49:19 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

int	do_input(t_stack **a, t_stack **b, char *op)
{
	if (!ft_strcmp(op, "sa\n"))
		sa(a, 0);
	else if (!ft_strcmp(op, "sb\n"))
		sb(b, 0);
	else if (!ft_strcmp(op, "ss\n"))
		ss(a, b, 0);
	else if (!ft_strcmp(op, "pa\n"))
		pa(a, b, 0);
	else if (!ft_strcmp(op, "pb\n"))
		pb(a, b, 0);
	else if (!ft_strcmp(op, "ra\n"))
		ra(a, 0);
	else if (!ft_strcmp(op, "rb\n"))
		rb(b, 0);
	else if (!ft_strcmp(op, "rr\n"))
		rr(a, b, 0);
	else if (!ft_strcmp(op, "rra\n"))
		rra(a, 0);
	else if (!ft_strcmp(op, "rrb\n"))
		rrb(b, 0);
	else if (!ft_strcmp(op, "rrr\n"))
		rrr(a, b, 0);
	else
		return (0);
	return (1);
}

void	checker(t_stack **a, t_stack **b)
{
	char	*op;

	op = "first";
	while (op)
	{
		op = get_next_line(0);
		if (op)
			if (!do_input(a, b, op))
				ft_error();
		free(op);
	}
	if (is_sorted(*a) && !(*b))
		write(1, "OK", 2);
	else
		write(1, "KO", 2);
}

int	main(int ac, char *av[])
{
	t_stack	*a;
	t_stack	*b;
	t_stack *tmp;
	int		slen;

	a = NULL;
	b = NULL;
	if (ac >= 2)
	{
		slen = 0;
		add_stack(&a, av, &slen);
		checker(&a, &b);
		while (a)
		{
			tmp = a;
			a = a->next;
			free(tmp);
		}
	}
	return (0);
}
