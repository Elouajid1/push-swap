/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_operations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:19:12 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/01 15:59:41 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(s_stack **a, int p)
{
    ft_swap(a);
    if(p)
        write (1, "sa\n", 3);
}

void    ra(s_stack **a, int p)
{
    rotate(a);
    if(p)
        write (1, "ra\n", 3);
}

void    rra(s_stack **a, int p)
{
    r_rotate(a);
    if(p)
        write (1,  "rra\n", 4);
}

void    rr(s_stack **a, s_stack **b, int p)
{
    rotate(a);
    rotate(b);
    if(p)
        write (1, "sa\n", 3);
}

void    rrr(s_stack **a, s_stack **b, int p)
{
    r_rotate(a);
    r_rotate(b);
    if (p)
        write (1, "rrr\n", 4);
}
