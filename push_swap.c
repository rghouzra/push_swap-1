/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:26:31 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/31 17:17:17 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char *av[])
{
	(void) ac;
	char **tmp;

	tmp = convert_text(av);
	while (*tmp)
	{
		ft_printf("%s\n", *tmp);
		free(*tmp);
		tmp++;
	}
	return (0);
}
