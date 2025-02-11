/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:19:07 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/11 15:09:24 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

s_node	*ft_lstnew(int content)
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
    s_node	*last;

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
	(*x) -> size++;
}

s_stack	*stack_init()
{
    s_stack	*new = malloc(sizeof(s_stack));
    if (!new)
        return (NULL);
    new -> top = NULL;
    new -> size = 0;
    return (new);
}
void	s_error(s_stack **a)
{
	ft_lstclear(a);
	write (1, "Error\n", 6);
	exit(1);
}


int	main(int ac, char **av)
{
	int		i;
	char	**nums;
	s_node	*n;

	i = 1;
	s_stack *a = stack_init();
	s_stack *b = stack_init();
	if (ac < 2)
		return (0);
	else
	{
		while (i < ac)
		{
			if (!av[i][0])
				s_error(&a);
			nums = ft_split(av[i], 32);
			Process_Num(nums, &a);
			i++;
		}
	}
	indexing(&a);
	if (a -> size == 2)
		sort_two(&a);
	else if (a -> size == 3)
		sort_three(&a);
	else if (a -> size <= 5)
		sort_five(&a, &b);
	s_node	*test = a -> top;
	//printf ("%d\n", a -> size);
	// while (test)
	// {
	// 	printf("%d\n", test->content);
	// 	test = test -> next;
	// }
	// test = a -> top;
	// while (test)
	// {
	// 	printf("%d\n", test->index);
	// 	test = test -> next;
	// }
	ft_lstclear(&a);
	ft_lstclear(&b);
	return (0);
}
