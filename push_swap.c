/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:26:31 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/30 12:20:13 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char *av[])
{
	t_stack	*a;
	int	i;

	i = 1;
	while (av[i] && i < ac)
	{
		ft_stkadd(&a, ft_atoi(av[i]));
		i++;
	}
	while (a)
	{
		ft_printf("%d\n", a->value);
		a = a->next;
	}
}