/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:00:23 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/31 17:24:25 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char    **convert_text(char **args)
{
	char	**res;
	char	*tmp;
	char	*tmp1;
	int		i;

	i = 1;
	tmp1 = ft_strdup("");
	while (args[i])
	{
		tmp = ft_strjoin(tmp1, args[i]);
		free(tmp1);
		tmp1 = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	res = ft_split(tmp1, ' ');
	free(tmp1);
	return (res);
}

void	add_stack(t_stack **stk, char **args)
{
	char	**da;
	int		i;

	i = 0;
	da = convert_text(args);
	while (da[i])
	{
		ft_stkadd(stk, ft_atoi(da[i]));
		i++;
	}
}