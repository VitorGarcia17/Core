/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:12:03 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/22 18:51:15 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*mem_temp;
	size_t	i;

	mem_temp = (char *) malloc(ft_strlen(s) + 1);
	if (!mem_temp)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		mem_temp[i] = s[i];
		i++;
	}
	mem_temp[i] = '\0';
	return (mem_temp);
}
