/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 14:11:57 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/13 14:54:55 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct t_node {
	int				content;
	int				index;
	struct t_node	*next;
} s_node;

typedef struct t_stack {
	s_node	*top;
	int		size;
} s_stack;

s_stack	*stack_init();
s_node	*ft_lstnew(int content);
void	ft_push(s_stack **x, s_node *n);
long	ft_atoi(const char *str);
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
int		is_dup(s_stack **a, int n);
void	ft_lstclear(s_stack **x);
void	free_nums(char	**nums);
char	**ft_split(char const *s, char c);
void	Process_Num(char **nums, s_stack **a);
void	s_error(s_stack **a);
void	sort_two(s_stack **n);
void	indexing(s_stack **a);
int		first_index(s_stack **s, int p, int i);
int		get_distance(s_stack **s, int idx);
void    rotate_s_b(s_stack **b, int highest_idx, int s_highest_idx);
void	push_to_a(s_stack **a, s_stack **b);
void	push_to_b(s_stack **a, s_stack **b, int p);
int		max(s_stack **s);
void	push_to_a(s_stack **a, s_stack **b);
void	ft_sort(s_stack	**a, s_stack **b);
void	sort_stacks(s_stack **a, s_stack **b);

# endif