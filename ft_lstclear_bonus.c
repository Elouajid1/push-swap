/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ouaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 02:27:21 by mel-ouaj          #+#    #+#             */
/*   Updated: 2024/11/16 18:49:51 by mel-ouaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
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
