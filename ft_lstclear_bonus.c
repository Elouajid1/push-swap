/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <mel-ouaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:27:21 by mel-ouaj          #+#    #+#             */
/*   Updated: 2025/02/05 17:00:19 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(s_stack **x, void (*del)(void *))
{
	t_list	*swp;

	if (!lst || !(*lst) || !del)
		return ;
	while (*lst)
	{
		swp = (*lst)-> next;
		ft_lstdelone(*lst, del);
		(*lst) = swp;
	}
}
