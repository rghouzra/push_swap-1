/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:26:31 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/03 16:01:00 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main (int ac, char *av[])
{
	(void) ac;
	t_stack *a;
	t_stack *b;
	
	add_stack(&a, av);
	ft_stkprint(a);
	if (ac == 3)
		sa(&a, 1);
	sort_five(&a, &b);
	ft_printf("\n=========\n");
	ft_stkprint(a);
	return (0);
}
