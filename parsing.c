/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 17:25:56 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/11 14:59:31 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_dup(s_stack **a, int n)
{
	s_node	*current;
	s_node	*next;

	current = (*a) -> top;
	while (current)
	{
		if (current -> content == n)
			return (0);
		current = current -> next;
	}
	return (1);
}

int	is_sorted(s_stack **a)
{
	s_node	*current;
	s_node	*next;

	if ((*a) -> size < 2)
		return (0);
	current  = (*a) -> top;
	while (current -> next)
	{
		if (current -> content > current -> next -> content)
			return (0);
		current = current -> next;
	}
	return (1);
}

void	ft_error(char **nums, s_stack **a)
{
	free_nums(nums);
	ft_lstclear(a);
	write (1, "Error\n", 6);
	exit(1);
}

int	check_num(char *nums)
{
	int	i;

	i = 0;
	if (nums[i] == '-' || nums[i] == '+')
	{
		if (nums[i + 1] == '\0')
			return (0);
		i++;
	}
	while (nums[i])
	{
		if (nums[i] < '0' || nums[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	Process_Num(char **nums, s_stack **a)
{
	int		i;
	int		num;
	s_node	*new;

	i = 0;
	while (nums[i])
	{
		if (!check_num(nums[i]))
			ft_error(nums, a);
		num = ft_atoi(nums[i]);
		if (num == 0 && nums[i][0] != '0')
			ft_error(nums, a);
		if (!is_dup(a, num))
			ft_error(nums, a);
		new = ft_lstnew(num);
		if (!new)
			ft_error(nums, a);
		ft_pushback(a, new);
		i++;
	}
	free_nums(nums);
}
	