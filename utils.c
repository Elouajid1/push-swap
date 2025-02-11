/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:19:33 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/11 17:36:13 by mel-ouaj         ###   ########.fr       */
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
		if (current -> content < min -> content)
		{
			min = current;
			min_index = i;
		}
		current = current -> next;
		i++;
	}
	return (min_index);
}

void	free_nums(char	**nums)
{
	int	i;

	i = 0;
	while (nums[i])
	{
		free(nums[i]);
		i++;
	}
	free (nums);
}

void	indexing(s_stack **a)
{
	s_node	*current;
	s_node	*tmp;

	tmp = (*a) -> top;
	if (!tmp -> next)
		return ;
	while (tmp)
	{
		tmp -> index = 0;
		current = (*a) -> top;
		while (current)
		{
			if (tmp -> content > current -> content)
				tmp -> index++;
			current = current -> next;
		}
		tmp = tmp -> next;
	}
}

void	first_index(s_stack **s)
{
	
}