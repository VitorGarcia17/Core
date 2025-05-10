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




#include <stdlib.h>

static size_t   count_words(const char *s, char c)
{
    size_t  i;
    size_t  count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            count++;
        i++;
    }
    return (count);
}

static char *extract_word(const char *s, size_t start, size_t len)
{
    char    *word;
    size_t  i;

    word = malloc(len + 1);
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[start + i];
        i++;
    }
    word[len] = '\0';
    return (word);
}

static void free_words(char **words, size_t count)
{
    while (count--)
        free(words[count]);
    free(words);
}

char    **ft_split(char const *s, char c)
{
    size_t  start;
    size_t  end;
    size_t  index;
    char    **arr;

    start = 0;
    index = 0;
    arr = malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!arr)
        return (NULL);
    while (s[start])
    {
        while (s[start] == c)
            start++;
        end = start;
        while (s[end] && s[end] != c)
            end++;
        if (end > start && !(arr[index++] = extract_word(s, start, end - start)))
            return (free_words(arr, index - 1), NULL);
        start = end;
    }
    arr[index] = NULL;
    return (arr);
}
