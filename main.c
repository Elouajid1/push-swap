/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:19:07 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/02 18:30:31 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
			i++;
	}
	// sort_three(&a);
	sort_five(&a, &b);
	s_node	*test = a -> top;
	while (test)
	{
		printf("%d\n", *(int *)test->content);
		test = test -> next;
	}
	// int m = min(&a);
	// printf("%d", m);
}
