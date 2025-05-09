/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:37:00 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/06 17:43:29 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last_list;

	if (!lst)
		return (NULL);
	last_list = lst;
	while (last_list->next != NULL)
	{
		last_list = last_list->next;
	}
	return (last_list);
}
