/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:19:07 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/05 16:38:42 by mel-ouaj         ###   ########.fr       */
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

s_stack *stack_init()
{
    s_stack *new = malloc(sizeof(s_stack));
    if (!new)
        return (NULL);
    new -> top = NULL;
    new -> size = 0;
    return (new);
}

int main(int ac, char **av)
{
	int		i;
	s_node	*n;

	if (ac < 2)
		return (0);
	i = 1;
	s_stack *a = stack_init();
	s_stack *b = stack_init();
	while (i < ac)
	{
			int	*val = malloc(sizeof(int));
			if (!val)
				return (0);
			*val = ft_atoi(av[i]);
			n = ft_lstnew(val);
			ft_pushback(&a, n);
			a -> size++;
			i++;
	}
	
	// int m = min(&a);
	// printf("%d \n", m);
	printf("%d \n", is_dup(&a));
	//sort_three(&a);
	sort_five(&a, &b);
	s_node	*test = a -> top;
	while (test)
	{
		printf("%d\n", *(int *)test->content);
		test = test -> next;
	}
	printf("%d \n", is_sorted(&a));
	// printf("%d , %d", a -> size, b -> size);
}
