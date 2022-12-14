/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:09:30 by mvautrot          #+#    #+#             */
/*   Updated: 2022/11/17 16:26:19 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	i;

	i = n;
	if (i == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (i < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-i, fd);
	}
	else if (i > 9)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar_fd(i % 10 + '0', fd);
	}
	else
		ft_putchar_fd (i + '0', fd);
}
