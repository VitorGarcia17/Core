/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:03:58 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/09 18:09:34 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Convert int to char
// positive_max = 2147483647;
// positive_ten = 10;
// zero = 0;
// negative_ten = -10;
// negative_max = -2147483648;
static int	ft_count_d(long n)
{
	long	nbr;
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

static int	ft_is_negative(long *n, int *i)
{
	if (*n < 0)
	{
		*i = 1;
		*n *= -1;
		return (1);
	}
	return (0);
}


char	*ft_itoaa(long n)
{
	int		i;
	char	*str;
	int		negative;
	
	i = 0;
	negative = ft_is_negative(&n, &i);
	i += ft_count_d(n);
	str = (char *) malloc((i + 1) * sizeof(char));
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

char	*ft_itoa(int n)
{
	long new_n;
	char	*str;

	new_n = n;
	str = ft_itoaa(new_n);
	return(str);
}
