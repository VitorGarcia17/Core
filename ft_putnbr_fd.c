/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipinhei <vipinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:41:37 by vipinhei          #+#    #+#             */
/*   Updated: 2025/05/09 19:08:26 by vipinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	digits[15];

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n == 0)
		write(fd, "0", 1);
	else
	{
		i = 0;
		if (n < 0)
		{
			n = n * -1;
			ft_putchar_fd('-', fd);
		}
		while (n > 0)
		{
			digits[i++] = (n % 10) + '0';
			n = n / 10;
		}
		while (i >= 0)
		{
			ft_putchar_fd(digits[i--], fd);
		}
	}
}
