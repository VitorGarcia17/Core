/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:03:58 by vipinhei          #+#    #+#             */
/*   Updated: 2025/04/23 15:56:31 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_d(int n)
{
	int	nbr;
	int	i;

	nbr = n;
	i = 1;
	while (nbr > 9)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

static int	ft_is_negative(int *n, int *i)
{
	if (*n < 0)
	{
		*i = 1;
		*n *= -1;
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		negative;

	i = 0;
	negative = ft_is_negative(&n, &i);
	i += ft_count_d(n);
	str = (char *) malloc(i * sizeof(char) + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	while (n > 9)
	{
		i--;
		str[i] = (char)(n % 10) + 48;
		n = n / 10;
	}
	if (negative)
	{
		str[1] = ((char) n + 48);
		str[0] = '-';
	}
	else
		str[0] = ((char) n + 48);
	return (str);
}
