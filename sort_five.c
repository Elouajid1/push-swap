/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:17:10 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/05 17:17:07 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(s_stack **a, s_stack **b)
{
	int	i;
	int	j;
	int	push_num;

	i = 0;
	push_num = 2;
	if ((*a) -> size == 4)
		push_num = 1;
	while (i < push_num)
	{
		j = min(a);
		if (j == 0)
			pb(b, a, 1);
		else if (j <= (*a) -> size / 2)
		{
			while (j > 0)
			{
				ra(a, 1);
				j--;
			}
			pb(b, a, 1);
		}
		else
		{
			while (j < (*a) -> size)
			{
				rra(a, 1);
				j++;
			}
			pb(b, a, 1);
		}
		i++;
	}
	sort_three(a);
	while (i > 0)
	{
		pa(a, b, 1);
		i--;
	}
}

