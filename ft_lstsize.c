/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:26:38 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/08 15:57:10 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*size_list;
	int		i;

	size_list = lst;
	i = 0;
	while (size_list != NULL)
	{
		i++;
		size_list = size_list->next;
	}
	return (i);
}
