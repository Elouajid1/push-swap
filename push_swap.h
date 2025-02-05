/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:11:57 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/05 17:13:32 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct t_node {
	int	*content;
	struct t_node *next;
} s_node;

typedef struct t_stack {
	s_node	*top;
	int		size;
} s_stack;

s_stack	*stack_init();
s_node	*ft_lstnew(void *content);
void	ft_push(s_stack **x, s_node *n);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
void	ft_swap(s_stack **x);
void	sort_three(s_stack **n);
void	rotate(s_stack **x);
void	r_rotate(s_stack **x);
void	sa(s_stack **a, int p);
void	ra(s_stack **a, int p);
void	rra(s_stack **a, int p);
void	rr(s_stack **a, s_stack **b, int p);
void	rrr(s_stack **a, s_stack **b, int p);
void	sb(s_stack **b, int p);
void	rb(s_stack **b, int p);
void	rrb(s_stack **b, int p);
void	ss(s_stack **a, s_stack **b, int p);
void	pa(s_stack **a, s_stack **b, int p);
void	pb(s_stack **b, s_stack **a, int p);
void	ft_pushback(s_stack **x, s_node *n);
int		min(s_stack **x);
void	sort_five(s_stack **n, s_stack **m);
int		is_sorted(s_stack **a);
int		is_dup(s_stack **a);

# endif