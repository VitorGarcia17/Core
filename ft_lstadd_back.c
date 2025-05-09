/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:42:42 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/08 18:32:20 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Add at end of list a new node
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*back_list;

	if (!*lst)
		*lst = new;
	else
	{
		back_list = ft_lstlast(*lst);
		back_list->next = new;
	}
}
