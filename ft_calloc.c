/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:44:32 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/08 16:55:45 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates size bytes and returns a pointer to the allocated memory
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_temp;

	if (nmemb == 0 || size == 0 || nmemb > (SIZE_MAX / size))
		return (NULL);
	mem_temp = malloc(nmemb * size);
	if (!mem_temp)
		return (NULL);
	ft_bzero(mem_temp, nmemb * size);
	return (mem_temp);
}
