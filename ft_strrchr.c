/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:03:17 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/22 18:08:58 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_len;
	char	*str;

	str = (char *) s;
	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		if (str[s_len] == c)
			return (&str[s_len]);
		s_len--;
	}
	return (0);
}
