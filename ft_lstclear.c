/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:27:21 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/11 17:33:31 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear(s_stack **x)
{
	s_node	*temp;
	s_node	*next;

	if (!x || !(*x))
		return ;
	temp = (*x) -> top;
	while (temp)
	{
		next = temp -> next;
		free(temp);
		temp = next;
	}
	(*x) -> top = NULL;
	(*x) -> size = 0;
	free (*x);
	*x = NULL;
}
