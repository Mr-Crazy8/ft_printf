/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:49:40 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/25 22:49:42 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(int nbr)
{
	int		count;
	char	num;

	count = 0;
	if (nbr == -2147483648)
	{
		count = write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		count = write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	num = nbr % 10 + '0';
	write(1, &num, 1);
}

int	putnbr(int b)
{
	int	count;

	ft_putnbr(b);
	count = 0;
	if (b < 0)
		count++;
	if (b == 0)
		return (1);
	while (b)
	{
		count++;
		b /= 10;
	}
	return (count);
}
