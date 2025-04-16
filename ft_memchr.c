/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:03:38 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/09 16:03:39 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	cc;

	str = (char *) s;
	cc = (char) c;
	i = 0;
	while (i < n && str[i] != '\0')
	{
		if(cc == str[i])
			return ((char *) str + i);
		i++;
	}
	return (NULL);
}
