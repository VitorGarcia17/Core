/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:28:06 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/22 18:51:51 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count(char const *s1, char const *set, int *i, int *j)
{
	int	count;
	int	s1_len;
	int	set_len;

	count = 0;
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (ft_memcmp(s1, set, set_len) == 0)
	{
		count++;
		*i = ft_strlen(set);
	}
	while (set_len > 0 && s1[s1_len] == set[set_len])
	{
		s1_len--;
		set_len--;
	}
	if (set_len == 0)
	{
		count++;
		*j = ft_strlen(s1) - ft_strlen(set);
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*mem_temp;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_strlen(s1);
	mem_temp = (char *) malloc(ft_strlen(s1)
			- (ft_count(s1, set, &i, &j) * ft_strlen(set)) + 1);
	if (!mem_temp)
		return (NULL);
	k = 0;
	while (s1[i] != '\0' && i < j)
	{
		mem_temp[k] = s1[i];
		i++;
		k++;
	}
	mem_temp[k] = '\0';
	return (mem_temp);
}
