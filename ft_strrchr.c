/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:03:17 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/09 17:00:21 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	char	cc;

	cc = (char) c;
	if (!s && cc != '\0')
		return (NULL);
	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == cc)
			return ((char *)s + s_len);
		s_len--;
	}
	return (NULL);
}
