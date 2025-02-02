/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:17:10 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/02 17:26:58 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_five(s_stack **n, s_stack **m)
{
    s_node  *x;
    int     i;
    int     j;
 
    j = min(n);
    i = 0;
    s_node *current = (*n) -> top;
    while (i < 2)
    {
        while (j != 0)
        {
            if (j <= 2)
                ra(n, 1);
            else
                rra(n, 1);
            j = min(n);
        }
        pb(n, current, 1);
        i++;
    }
    sort_three(n);
    pa(m, current, 1);
    pa(m, current, 1);
}