/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anel-men <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:45:33 by anel-men          #+#    #+#             */
/*   Updated: 2024/11/25 22:45:35 by anel-men         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_base(unsigned long nbr, char *base)
{
	int	count;

	count = 0;
	if (nbr >= 16)
		count += ft_base(nbr / 16, base);
	count += write(1, &base[nbr % 16], 1);
	return (count);
}

int	format_p(void *ptr)
{
	int				count;
	char			*base;
	unsigned long	address;

	count = 0;
	address = (unsigned long)ptr;
	base = "0123456789abcdef";
	count = write(1, "0x", 2);
	count += ft_base(address, base);
	return (count);
}
