/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:42:47 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/15 14:19:49 by aarbaoui         ###   ########.fr       */
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

// void	do_input(t_stack **a, t_stack **b)
// {
// 	char *line;

// 	line = "fir";
// 	while ((line = get_next_line(0)) > 0)
// 	{
// 		if (!ft_strcmp(line, "sa\n"))
// 			sa(a, 0);
// 		else if (!ft_strcmp(line, "sb\n"))
// 			sb(b, 0);
// 		else if (!ft_strcmp(line, "ss\n"))
// 			ss(a, b, 0);
// 		else if (!ft_strcmp(line, "pa\n"))
// 			pa(a, b, 0);
// 		else if (!ft_strcmp(line, "pb\n"))
// 			pb(a, b, 0);
// 		else if (!ft_strcmp(line, "ra\n"))
// 			ra(a, 0);
// 		else if (!ft_strcmp(line, "rb\n"))
// 			rb(b, 0);
// 		else if (!ft_strcmp(line, "rr\n"))
// 			rr(a, b, 0);
// 		else if (!ft_strcmp(line, "rra\n"))
// 			rra(a, 0);
// 		else if (!ft_strcmp(line, "rrb\n"))
// 			rrb(b, 0);
// 		else if (!ft_strcmp(line, "rrr\n"))
// 			rrr(a, b, 0);
// 		else
// 			ft_error();
// 		ft_stkprint(*a);
// 	}
// }

// static int ftis_sorted(t_stack *a)
// {
// 	t_stack *tmp;

// 	tmp = a;
// 	while (tmp->next)
// 	{
// 		if (tmp->value > tmp->next->value)
// 			return (0);
// 		tmp = tmp->next;
// 	}
// 	return (1);
// }

// int main(int ac, char **av)
// {
// 	t_stack *a;
// 	t_stack *b;

// 	a = NULL;
// 	b = NULL;
// 	if (ac == 1)
// 		return (0);
// 	if (ac == 2)
// 		av = ft_split(av[1], ' ');
// 	add_stack(&a, av, &ac);
// 	ft_stkprint(a);
// 	do_input(&a, &b);
// 	ft_stkprint(a);
// 	if (ftis_sorted(a) && !b)
// 		ft_putstr_fd("OK", 1);
// 	else
// 		ft_putstr_fd("KO", 1);
// 	return (0);
// }

t_stack **fetch_address(t_stack **a, t_stack **b, int c)
{
	static t_stack **a_address;
	static t_stack **b_address;
	static int k;

	if (!k++)
	{
		a_address = a;
		b_address = b;
	}
	if (c == 'a')
		return (a_address);
	return (b_address);
}

t_stack **get_address(int c)
{
	if (c == 'a')
		return (fetch_address(NULL, NULL, 'a'));
	return (fetch_address(NULL, NULL, 'b'));
}

// static int	exec(char *operation)
// {
// 	if (!ft_strcmp(operation, "sa\n"))
// 		sa(*get_address('a'),0);
// 	else if (!ft_strcmp(operation, "sb\n"))
// 		sb(*get_address('b'), 0);
// 	else if (!ft_strcmp(operation, "ss\n"))
// 		ss(*get_address('a'), get_address('b'), 0);
// 	else if (!ft_strcmp(operation, "pa\n"))
// 		pa(*get_address('a'), get_address('b'), 0);
// 	else if (!ft_strcmp(operation, "pb\n"))
// 		pb(*get_address('a'), get_address('b'), 0);
// 	else if (!ft_strcmp(operation, "ra\n"))
// 		ra(*get_address('a'), 0);
// 	else if (!ft_strcmp(operation, "rb\n"))
// 		rb(*get_address('b'), 0);
// 	else if (!ft_strcmp(operation, "rr\n"))
// 		rr(*get_address('a'), get_address('b'), 0);
// 	else if (!ft_strcmp(operation, "rra\n"))
// 		rra(*get_address('a'), 0);
// 	else if (!ft_strcmp(operation, "rrb\n"))
// 		rrb(*get_address('b'), 0);
// 	else if (!ft_strcmp(operation, "rrr\n"))
// 		rrr(*get_address('a'), get_address('b'), 0);
// 	else
// 		ft_error();
// 	return (1);
// }

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

// int main(int ac, char **av)
// {
// 	t_stack *a;
// 	t_stack *b;

// 	a = NULL;
// 	b = NULL;
// 	if (ac == 1)
// 		return (0);
// 	add_stack(&a, av, &ac);
// 	// ft_stkprint(a);
// 	// do_input(&a, &b);
// 	check(&a, &b);
// 	// ft_stkprint(a);
// 	// if (ftis_sorted(a) && !b)
// 	// 	ft_putstr_fd("OK", 1);
// 	// else
// 	// 	ft_putstr_fd("KO", 1);
// 	return (0);
// }

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