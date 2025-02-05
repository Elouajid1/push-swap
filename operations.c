/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:45:13 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/02 17:57:25 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(s_stack **a, s_stack **b, int p)
{
	s_node	*n;

	n = (*b) -> top;
	(*b) -> top = n -> next;
	n -> next = (*a) -> top;
	(*a) -> top = n;
	(*a) -> size++;
	(*b) -> size--;
	if (p)
		write (1, "pa\n", 3);
}

void	pb(s_stack **b, s_stack **a, int p)
{
	s_node	*n;

	n = (*a) -> top;
	(*a) -> top = n -> next;
	n -> next = (*b) -> top;
	(*b) -> top = n;
	(*a) -> size--;
	(*b) -> size++;
	if (p)
		write (1, "pb\n", 3);
}

void	ft_swap(s_stack **x)
{
	void	*tmp;

	if (!x)
		return ;
	tmp = (*x) -> top -> content;
	(*x) -> top -> content = (*x) -> top -> next -> content;
	(*x) -> top -> next -> content = tmp;
}

void	rotate(s_stack **x)
{
	s_node	*last;
	s_node	*first;
	if (!x )
		return ;
	first = (*x) -> top;
	last = (*x) -> top;
	while (last -> next != NULL)
		last = last -> next;
	(*x) -> top = first -> next;
	first -> next = NULL;
	last -> next = first;
}

void r_rotate(s_stack **x)
{
	s_node	*last;
	s_node	*b_last;

	b_last = NULL;
	last = (*x) -> top;
	while (last -> next != NULL)
	{
		b_last = last;
		last = last -> next;
	}
	b_last -> next = NULL;
	last -> next = (*x) -> top;
	(*x) -> top = last;
}

// int main()
// {
// 	s_stack *a = stack_init();
// 	s_stack *b = stack_init();
// 	int *val = malloc (sizeof(int));
// 	*val = 5;
// 	s_node *n = ft_lstnew(val);
// 	int *val1 = malloc (sizeof(int));
// 	*val1 = 8;
// 	s_node *n1 = ft_lstnew(val1);
// 	int *val2 = malloc (sizeof(int));
// 	*val2 = 15;
// 	s_node *n2 = ft_lstnew(val2);
// 	int *val3 = malloc (sizeof(int));
// 	*val3 = 6;
// 	s_node *n3 = ft_lstnew(val3);
// 	int *val4 = malloc (sizeof(int));
// 	*val4 = 9;
// 	s_node *n4 = ft_lstnew(val4);
// 	ft_pushback(&a, n);
// 	ft_pushback(&a, n1);
// 	ft_pushback(&a, n2);
// 	ft_pushback(&a, n3);
// 	ft_pushback(&a, n4);
// 	//ft_swap(&a);
// 	//rotate(&a);
// 	//r_rotate(&a);
// 	sort_five(&a, &b);
// 	s_node *current = a -> top;
// 	while (current != NULL)
// 	{
// 		printf("%d\n", *current ->content);
// 		current = current -> next;
// 	}
// }
