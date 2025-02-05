/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:19:33 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/02 17:17:36 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int min(s_stack **x)
{
    s_node      *min;
    s_node      *current;
    int         i;
    int         min_index;

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

