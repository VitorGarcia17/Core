/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:17:18 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/23 14:01:04 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_str_count(char const *s, char c)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i + j] != c)
		{
			j++;
		}
		if (j > 0)
		{
			count++;
			i += j;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**mem_arr;

	i = 0;
	k = 0;
	mem_arr = (char **) malloc((ft_str_count(s, c) + 1) * sizeof(char *));
	if (!mem_arr)
		return (NULL);
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i + j] != c)
			j++;
		if (j > 0)
		{
			mem_arr[k++] = ft_substr(s, (i + 1), j);
			i += j;
		}
		i++;
	}
	mem_arr[k] = NULL;
	return (mem_arr);
}
