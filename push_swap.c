/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 13:52:31 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/01 16:03:09 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_node	*ft_lstnew(void *content)
{
    s_node	*new;

    new = malloc(sizeof(s_node));
    if (!new)
    	return (NULL);
    new -> content = content;
    new -> next = NULL;
    return (new);
}

void	 ft_push(s_stack **x, s_node  *n)
{
	if (!n || !x)
		return ;
	n -> next = (*x) -> top;
	(*x) -> top = n;
}

void	ft_pushback(s_stack **x, s_node *n)
{
	if (!x || !n)
		return ;
    s_node    *last;

    last = (*x) -> top;
    if ((*x) -> top == NULL)
		(*x) -> top = n;
	else
    {
        while (last-> next != NULL)
        {
            last = last -> next;
        }
		last -> next = n;
    }
}

// int main()
// {
// 	int *val = malloc(sizeof(int*));
// 	*val = 5;
// 	s_node *gg = ft_lstnew(val);
// 	printf("%d", *(int *)gg -> content);
// }

s_stack *stack_init()
{
    s_stack *new = malloc(sizeof(s_stack));
    if (!new)
        return (NULL);
    new -> top = NULL;
    new -> size = 0;
    return (new);
}

// int main()
// {
// 	s_stack *a = s_stack_init();
//     if (a->top != NULL || a->size != 0) {
// 		printf("Error: s_stack fields are not initialized correctly\n");
// 		return 1; // Exit or handle the error
// 	} else {
// 		printf("s_stack initialized successfully\n");
// 	}
// }
