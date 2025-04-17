/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:44:32 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/17 15:54:22 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	if(nmemb == 0 || size == 0 || nmemb > SIZE_MAX / size)
		return (NULL);
	
	malloc(nmemb * size);
	return (NULL);
}
