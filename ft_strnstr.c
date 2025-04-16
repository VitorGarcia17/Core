/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:04:22 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/09 16:04:23 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		l_len;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	l_len = ft_strlen(little);
	while (i < len && big[i] != '\0')
	{
		if (l_len > len - 1)
			return (NULL);
		if (ft_strncmp((char *)&big[i], little, l_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
