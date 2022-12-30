/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:26:31 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/30 18:43:48 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char *av[])
{
	t_stack	*a;
	t_stack *b;
	int	i;

	i = 1;
	b = NULL;
	while (av[i] && i < ac)
	{
		ft_stkadd(&a, ft_atoi(av[i]));
		i++;
	}
	i = 0;
	while (i < 3)
	{
		ft_printf("\na: ");
		ft_stkprint(a);
		ft_printf("\nb: ");
		ft_stkprint(b);
		rra(&a);
		i++;
	}
	return (0);
}
