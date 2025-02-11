/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:18:50 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/09 16:17:20 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	sort_three(s_stack **n)
{
	s_node	*first;
	s_node	*second;
	s_node	*third;

	first = (*n) -> top;
	second = first -> next;
	third = second -> next;
	int val1 = first -> content;
	int val2 = second -> content;
	int val3 = third -> content;
	if (val1 > val2 && val2 > val3)
	{
		sa(n, 1);
		rra(n, 1);
	}
	else if (val1 > val3 && val3 > val2)
		ra(n, 1);
	else if (val2 > val1 && val1 > val3)
		rra (n, 1);
	else if (val2 > val3 && val3 > val1)
	{
		sa (n, 1);
		ra (n, 1);
	}
	else if (val3 > val1 && val1 > val2)
		sa(n, 1);
}

void	sort_two(s_stack **n)
{
	s_node	*first;
	s_node	*second;
	
	first = (*n) -> top;
	second = (*n) -> top -> next;
	if (first -> content > second -> content)
		sa(n, 1);
	else
		return ;
}