/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:39:08 by aarbaoui          #+#    #+#             */
/*   Updated: 2022/12/30 18:38:44 by aarbaoui         ###   ########.fr       */
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
void	ft_stkprint(t_stack *head);
// ops
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif