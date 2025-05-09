/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:03:38 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/09 17:02:08 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Scan memory for a character
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	cc;

	str = (char *) s;
	cc = (char) c;
	i = 0;
	while (i < n)
	{
		if (cc == str[i])
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}
