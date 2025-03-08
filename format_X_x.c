/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_X_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:44:31 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/25 22:44:43 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	hex(unsigned int num, char x)
{
	int		count;
	char	hexup;
	char	hexlow;

	count = 0;
	if (num > 0)
	{
		hex(num / 16, x);
		if (num % 16 < 10)
			putnbr(num % 16);
		else if (x == 'X')
		{
			hexup = (num % 16) + 55;
			write(1, &hexup, 1);
		}
		else if (x == 'x')
		{
			hexlow = (num % 16) + 87;
			write(1, &hexlow, 1);
		}
	}
}

int	formathex(unsigned int num, char x)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		hex(num, x);
	return (hex_len(num));
}
