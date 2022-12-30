/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:39:08 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/30 13:52:30 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
typedef struct s_stack
{
	int				value;
	int 			index;
	struct s_stack	*next;
}	t_stack;

// stack.init
t_stack	*ft_stklast(t_stack *stk);
void	ft_stkadd(t_stack **ptr, int new);
//stack.hlpr
void	push_front(t_stack **head, int val);
// ops
void	sa(t_stack *ptr);
void	sb(t_stack *ptr);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack **a, t_stack **b);
#endif