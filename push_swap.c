/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:26:31 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/30 13:56:40 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char *av[])
{
	t_stack	*a;
	t_stack *b;
	int	i;

	i = 1;
	while (av[i] && i < ac)
	{
		ft_stkadd(&a, ft_atoi(av[i]));
		ft_stkadd(&b, ft_atoi(av[i]) * 2);
		i++;
	}
	pa(&a, &b);
	ft_printf("----------a--------\n");
	while (a)
	{
		ft_printf("%d\n", a->value);
		a = a->next;
	}
	ft_printf("----------b--------\n");
	while (b)
	{
		ft_printf("%d\n", b->value);
		b = b->next;
	}
	while (1)
	{
		/* code */
	}
	
}
