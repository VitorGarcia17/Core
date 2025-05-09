/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:47:05 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/09 17:26:17 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = (char *) malloc(1);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return sub;
	}
	s_len = s_len - start;
	if (len < s_len)
		s_len = len;
	sub = (char *)malloc(s_len + 1);
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, &s[start], s_len);
	sub[s_len] = '\0';
	return (sub);
}
