/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarbaoui <aarbaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:39:08 by aarbaoui          #+#    #+#             */
/*   Updated: 2023/01/11 12:42:55 by aarbaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include "libft.h"
# include "ft_printf.h"
# include "debuh.h"
# define THUNDO 5
# define OHUNDO 10

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
void	push_front(t_stack **head, int val, int index);
void	ft_stkprint(t_stack *head);
int		ft_stklen(t_stack *head);
//stack.checks
int		is_sorted(t_stack *stk);
// ops
void	sa(t_stack **a, int fd);
void	sb(t_stack **b, int fd);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a, int fd);
void	rb(t_stack **b, int fd);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a, int fd);
void	rrb(t_stack **b, int fd);
void	rrr(t_stack **a, t_stack **b);
// parsing.init
char    **convert_text(char **args);
void	add_stack(t_stack **stk, char **args, int *slen);
//sorting
void	sort_two(t_stack **a);
void    sort_three(t_stack **a);
void    sort_four(t_stack **a, t_stack **b);
void    sort_five(t_stack **a, t_stack **b);
void    push_chunks(t_stack **a, t_stack **b, int chunk, int max);
void    sort_init(t_stack **a, t_stack **b, int d);
void	sort_chunks(t_stack **a, t_stack **b);
// sorting.hlpr
int		find_index(t_stack *stk, int val);
int		get_dis(t_stack *ptr, int index);
void	push_top(t_stack **stk, int index, int len);
void	push_two_top(t_stack **a, t_stack **b, int *index, int i);
#endif