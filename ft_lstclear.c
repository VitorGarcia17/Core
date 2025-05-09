/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 17:10:24 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/08 17:06:42 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Delete all content from the nodes and free the memmory
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_list;

	while (*lst != NULL)
	{
		temp_list = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = temp_list;
	}
	free(*lst);
}
