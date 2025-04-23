/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:47:05 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/22 18:12:51 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*mem_temp;
	unsigned int	i;

	mem_temp = malloc(len + 1);
	if (!mem_temp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mem_temp[i] = s[i + start - 1];
		i++;
	}
	mem_temp[i] = '\0';
	return (mem_temp);
}
