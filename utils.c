/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:19:33 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/05 17:16:45 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min(s_stack **x)
{
	s_node	*min;
	s_node	*current;
	int		i;
	int		min_index;

	i = 0;
	min = (*x) -> top;
	current = (*x) -> top;
	min_index = 0;    
	while (current != NULL)
	{
		if (*(int *)current -> content < *(int *)min -> content)
		{
			min = current;
			min_index = i;
		}
		current = current -> next;
		i++;
	}
	return (min_index);
}

int	is_dup(s_stack **a)
{
	s_node	*current;
	s_node	*next;

	if ((*a) -> size < 2)
		return (0);
	current = (*a) -> top;
	while (current -> next)
	{
		next = current -> next;
		while (next)
		{
			if (*(int *)current -> content == (*(int *)next -> content))
				return (0);
			next = next -> next;
		}
		current = current -> next;
	}
	return (1);
}

int	is_sorted(s_stack **a)
{
	s_node	*current;
	s_node	*next;

	if ((*a) -> size < 2)
		return (0);
	current  = (*a) -> top;
	while (current -> next)
	{
		if (*(int *)current -> content > *(int *)current -> next -> content)
			return (0);
		current = current -> next;
	}
	return (1);
}