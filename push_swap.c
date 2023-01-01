/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:26:31 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/01 16:57:50 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char *av[])
{
	(void) ac;
	t_stack *a;

	add_stack(&a, av);
	ft_printf("is : %d\n", is_sorted(a));
	ft_stkprint(a);
	sa(&a, 1);
	ft_printf("is : %d\n", is_sorted(a));
	return (0);
}
