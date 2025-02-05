/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:54:57 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/05 15:02:10 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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