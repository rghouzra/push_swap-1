/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:42:47 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/15 14:22:51 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_error(void)
{
	ft_putstr_fd("Error\n", 2);
}

int ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

int	do_inputt(t_stack **a, t_stack **b, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		sa(a, 0);
	else if (!ft_strcmp(line, "sb\n"))
		sb(b, 0);
	else if (!ft_strcmp(line, "ss\n"))
		ss(a, b, 0);
	else if (!ft_strcmp(line, "pa\n"))
		pa(a, b, 0);
	else if (!ft_strcmp(line, "pb\n"))
		pb(a, b, 0);
	else if (!ft_strcmp(line, "ra\n"))
		ra(a, 0);
	else if (!ft_strcmp(line, "rb\n"))
		rb(b, 0);
	else if (!ft_strcmp(line, "rr\n"))
		rr(a, b, 0);
	else if (!ft_strcmp(line, "rra\n"))
		rra(a, 0);
	else if (!ft_strcmp(line, "rrb\n"))
		rrb(b, 0);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(a, b, 0);
	else
		ft_error();
	// ft_stkprint(*a);
	return (1) ;
}

static void check(t_stack **a, t_stack **b)
{
	char *lel;

	lel = "kys";
	while (lel)
	{
		lel = get_next_line(0);
		if (lel)
			if (!do_inputt(a, b, lel))
				ft_error();
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
	int		slen;

	a = NULL;
	b = NULL;
	if (ac >= 2)
	{
		slen = 0;
		add_stack(&a, av, &slen);
		check(&a, &b);
	}
	return (0);
}