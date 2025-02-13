/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_moves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 18:15:16 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/13 16:15:17 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(s_stack **a, s_stack **b, int p)
{
	int	i;
	int	size;
	int	index;
	
	i = 0;
	size = (*a) -> size;
	while (i < size)
	{
		index = (*a) -> top -> index;
		if (index <= i)
		{
			pb(b, a, 1);
			rb(b, 1);
			i++;
		}
		else if(index <= i + p)
		{
			pb(b, a, 1);
			i++;
		}
		else if(first_index(a, p, i) <= size / 2)
			ra(a, 1);
		else
			rra(a, 1);
	}
}

int	max(s_stack **s)
{
	s_node	*current;
	int		max;

	if (!(*s) || !(*s) -> top)
		return (0);
	current = (*s) -> top;
	max = current -> index;    
	while (current != NULL)
	{
		if (current -> index > max)
			max = current -> index;
		current = current -> next;
	}
	return (max);
}

void    rotate_s_b(s_stack **b, int highest_idx, int s_highest_idx)
{
	int		size;

	if (*b == NULL || (*b) -> top == NULL)
		return ;
	size = (*b) -> size;
	if (get_distance(b, highest_idx) <= size / 2)
	{
		while (((*b) -> top -> index != highest_idx)
			&&((*b) -> top -> index != s_highest_idx))
			rb(b, 1);
	}
	else
	{
		while (((*b) -> top -> index != highest_idx)
			&& ((*b) -> top -> index != s_highest_idx))
			rrb(b, 1);
	}
}

void	push_to_a(s_stack **a, s_stack **b)
{
	int		highest_idx;
	int		s_highest_idx;
	s_node	*a_current;
	s_node	*b_current;

	while (*b)
	{
		highest_idx = max(b);
		s_highest_idx = highest_idx - 1;
		b_current = (*b) -> top;
		if ((*b) -> top == NULL)
			break ;
		if (b_current -> index == highest_idx || b_current -> index == s_highest_idx)
			pa(a, b, 1);
		else
			rotate_s_b(b, highest_idx, s_highest_idx);
		if ((*a) && (*a) -> size > 1)
		{
			a_current = (*a) -> top;
			if (a_current -> index > a_current -> next -> index)
				sa(a, 1);
		}
	}
}

void	ft_sort(s_stack	**a, s_stack **b)
{
	int	size;

	size = (*a) -> size;
	indexing(a);
	if (!is_sorted(a))
	{
		if (size <= 400)
			push_to_b(a, b, 15);
		else
			push_to_b(a, b, 30);
		push_to_a(a, b);
	}
}

void	sort_stacks(s_stack **a, s_stack **b)
{
	int	size;

	size = (*a) -> size;
	if (size <= 3)
		sort_three(a);
	else if (size <= 5)
		sort_five(a, b);
	else
		ft_sort(a, b);
}
	