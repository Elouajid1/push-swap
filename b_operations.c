/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:19:10 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/05 17:17:57 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

void	sb(s_stack **b, int p)
{
	ft_swap(b);
	if (p)
		write (1, "sb\n", 3);
}

void	rb(s_stack **b, int p)
{
	rotate(b);
	if (p)
		write (1, "rb\n", 3);
}

void	rrb(s_stack **b, int p)
{
	r_rotate(b);
	if (p)
		write (1, "rrb\n", 4);
}

void	ss(s_stack **b, s_stack **a, int p)
{
	ft_swap(a);
	ft_swap(b);
	if (p)
		write (1, "ss\n", 3);
}

void	pb(s_stack **b, int p)
{
	ft_push(b);
	if (p)
		write (1, "pb\n", 3);
}
