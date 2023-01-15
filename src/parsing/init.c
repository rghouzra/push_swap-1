/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 15:00:23 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/12 12:08:13 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**convert_text(char **args)
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

void	is_allint(char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && av[i][j] != '-')
			{
				ft_putstr_fd("Error: Invalid arguments\n", 2);
				exit(1);
			}
			j++;
		}
		i++;
	}
}

void	add_stack(t_stack **stk, char **args, int *slen)
{
	char	**da;
	int		i;
	long	num;
	
	num = 0;
	i = 0;
	da = convert_text(args);
	is_allint(da);
	while (da[i])
	{
		num = ft_atoi(da[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			ft_putstr_fd("Error: interger overflow.\n", 2);
			exit(1);
		}
		ft_stkadd(stk, ft_atoi(da[i]));
		free(da[i]);
		i++;
	}
	*slen = i;
	free(da);
}
