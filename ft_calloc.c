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
    size_t  total_size;
    void    *memory;

    if (nmemb == 0 || size == 0)
        return (NULL);
    total_size = nmemb * size;
    if (nmemb > SIZE_MAX / size)
        return (NULL);
    memory = malloc(total_size);
    if (!memory)
        return (NULL);
    ft_bzero(memory, total_size); // Mantendo sua função personalizada
    return (memory);
}
