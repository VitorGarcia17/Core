/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:02:56 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/09 16:02:57 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		s_len;
	char	*str;

	i = 0;
	s_len = ft_strlen(s);
	str = (char *) s;
	while (i < s_len)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
