/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:29:00 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/05 16:29:30 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_dup(s_stack **a)
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