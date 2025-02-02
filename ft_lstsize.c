/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:49:41 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/01 16:04:23 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(s_node *lst)
{
	int		i;
	s_node	*node;

	i = 0;
	node = lst;
	while (node)
	{
		i++;
		node = node -> next;
	}
	return (i);
}
