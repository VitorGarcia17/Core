/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:01:49 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/08 17:54:20 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_dst;
	size_t	l_src;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (l_src);
	while ((l_dst + i) < (size - 1) && src[i] != '\0')
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = '\0';
	if (l_dst > size)
		return (size + l_src);
	else
		return (l_dst + l_src);
}
